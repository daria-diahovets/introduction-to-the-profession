#include <iostream>
#include <string>
using namespace std;

struct Player
{
  string name;
  string position; /* goalkeeper, forward, midfielder, etc. */
  int goals;
  int matches;
  double rating;
};

void addPlayer(Player players[], int &count);
void displayPlayers(const Player players[], int count);
void searchPlayersByPosition(const Player players[], int count, const string &position);
int totalGoals(const Player players[], int count);
Player findTopScorer(const Player players[], int count);
Player findTopRatedPlayer(const Player players[], int count);
void updatePlayerStats(Player players[], int count, const string &name);
void formOptimalTeam(const Player players[], int count);

int main()
{
  const int MAX_PLAYERS = 20;
  Player players[MAX_PLAYERS];
  int playerCount = 0;

  int choice;
  do
  {
    cout << "\n--- Football Team Management ---\n";
    cout << "1. Add a player\n";
    cout << "2. Display all players\n";
    cout << "3. Search players by position\n";
    cout << "4. Calculate total goals\n";
    cout << "5. Find top scorer\n";
    cout << "6. Find top-rated player\n";
    cout << "7. Update player statistics\n";
    cout << "8. Form optimal team\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      addPlayer(players, playerCount);
      break;
    case 2:
      displayPlayers(players, playerCount);
      break;
    case 3:
    {
      string position;
      cout << "Enter position: ";
      cin >> position;
      searchPlayersByPosition(players, playerCount, position);
      break;
    }
    case 4:
      cout << "Total goals scored by the team: " << totalGoals(players, playerCount) << endl;
      break;
    case 5:
    {
      Player topScorer = findTopScorer(players, playerCount);
      cout << "Top scorer: " << topScorer.name << " with " << topScorer.goals << " goals.\n";
      break;
    }
    case 6:
    {
      Player topRated = findTopRatedPlayer(players, playerCount);
      cout << "Top-rated player: " << topRated.name << " with a rating of " << topRated.rating << ".\n";
      break;
    }
    case 7:
    {
      string name;
      cout << "Enter player name to update: ";
      cin >> name;
      updatePlayerStats(players, playerCount, name);
      break;
    }
    case 8:
      formOptimalTeam(players, playerCount);
      break;
    case 9:
      cout << "Exiting program.\n";
      break;
    default:
      cout << "Invalid choice. Please try again.\n";
    }
  } while (choice != 9);

  return 0;
}

void addPlayer(Player players[], int &count)
{
  if (count >= 20)
  {
    cout << "Cannot add more players. Maximum limit reached.\n";
    return;
  }
  cout << "Enter player name: ";
  cin >> players[count].name;
  cout << "Enter position: ";
  cin >> players[count].position;
  cout << "Enter goals: ";
  cin >> players[count].goals;
  cout << "Enter matches: ";
  cin >> players[count].matches;
  cout << "Enter rating: ";
  cin >> players[count].rating;
  count++;
  cout << "Player added successfully.\n";
}

void displayPlayers(const Player players[], int count)
{
  if (count == 0)
  {
    cout << "No players in the team.\n";
    return;
  }
  cout << "\n--- Player List ---\n";
  for (int i = 0; i < count; i++)
  {
    cout << "Name: " << players[i].name << ", Position: " << players[i].position
         << ", Goals: " << players[i].goals << ", Matches: " << players[i].matches
         << ", Rating: " << players[i].rating << endl;
  }
}

void searchPlayersByPosition(const Player players[], int count, const string &position)
{
  bool found = false;
  for (int i = 0; i < count; i++)
  {
    if (players[i].position == position)
    {
      cout << "Name: " << players[i].name << ", Goals: " << players[i].goals
           << ", Matches: " << players[i].matches << ", Rating: " << players[i].rating << endl;
      found = true;
    }
  }
  if (!found)
  {
    cout << "No players found for the position: " << position << endl;
  }
}

int totalGoals(const Player players[], int count)
{
  int total = 0;
  for (int i = 0; i < count; i++)
  {
    total += players[i].goals;
  }
  return total;
}

Player findTopScorer(const Player players[], int count)
{
  Player topScorer = players[0];
  for (int i = 1; i < count; i++)
  {
    if (players[i].goals > topScorer.goals)
    {
      topScorer = players[i];
    }
  }
  return topScorer;
}

Player findTopRatedPlayer(const Player players[], int count)
{
  Player topRated = players[0];
  for (int i = 1; i < count; i++)
  {
    if (players[i].rating > topRated.rating)
    {
      topRated = players[i];
    }
  }
  return topRated;
}

void updatePlayerStats(Player players[], int count, const string &name)
{
  for (int i = 0; i < count; i++)
  {
    if (players[i].name == name)
    {
      cout << "Enter new goals: ";
      cin >> players[i].goals;
      cout << "Enter new matches: ";
      cin >> players[i].matches;
      cout << "Enter new rating: ";
      cin >> players[i].rating;
      cout << "Player stats updated.\n";
      return;
    }
  }
  cout << "Player not found.\n";
}

void formOptimalTeam(const Player players[], int count)
{
  if (count == 0)
  {
    cout << "No players to form a team.\n";
    return;
  }
  cout << "\n--- Optimal Team ---\n";
  for (int i = 0; i < count; i++)
  {
    if (players[i].rating >= 7.5)
    {
      cout << "Name: " << players[i].name << ", Position: " << players[i].position 
           << ", Rating: " << players[i].rating << endl;
    }
  }
}
