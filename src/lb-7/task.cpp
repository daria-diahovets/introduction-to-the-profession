#include <iostream>
#include <string>
using namespace std;

struct Student
{
  string name;
  double grade;
};

void addStudent(Student *&students, int &count);
void removeStudent(Student *&students, int &count, const string &name);
double calculateAverage(const Student *students, int count);
void displayStudents(const Student *students, int count);

int main()
{
  Student *students = nullptr; // Начинаем с пустого списка
  /* nullptr — специальное значение, которое означает, что указатель не указывает ни на какой объект в памяти. */
  int studentCount = 0;
  int choice;

  do
  {
    cout << "\n--- Menu ---\n";
    cout << "1. Add student\n";
    cout << "2. Remove student\n";
    cout << "3. Calculate average grade\n";
    cout << "4. Display all students\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      addStudent(students, studentCount);
      break;
    case 2:
    {
      string name;
      cout << "Enter student's name to remove: ";
      cin >> name;
      removeStudent(students, studentCount, name);
      break;
    }
    case 3:
      cout << "Average grade: " << calculateAverage(students, studentCount) << endl;
      break;
    case 4:
      displayStudents(students, studentCount);
      break;
    case 5:
      cout << "Exiting the program.\n";
      break;
    default:
      cout << "Invalid choice, please try again.\n";
    }
  } while (choice != 5);

  delete[] students; // Освобождаем память
  return 0;
}

void addStudent(Student *&students, int &count)
{
  Student *newStudents = new Student[count + 1]; // Создаем новый массив с увеличенным размером
  for (int i = 0; i < count; i++)
  {
    newStudents[i] = students[i]; // Копируем существующих студентов
  }

  cout << "Enter student's name: ";
  cin >> newStudents[count].name;
  cout << "Enter student's grade: ";
  cin >> newStudents[count].grade;

  delete[] students;      // Удаляем старый массив
  students = newStudents; // Перенаправляем указатель на новый массив
  count++;
}

void removeStudent(Student *&students, int &count, const string &name)
{
  int index = -1;
  for (int i = 0; i < count; i++)
  {
    if (students[i].name == name)
    {
      index = i;
      break;
    }
  }

  if (index == -1)
  {
    cout << "Student not found.\n";
    return;
  }

  Student *newStudents = new Student[count - 1];
  for (int i = 0, j = 0; i < count; i++)
  {
    if (i != index)
    {
      newStudents[j++] = students[i]; // Копируем всех, кроме удаляемого студента
    }
  }

  delete[] students;
  students = newStudents; // Перенаправляем указатель на новый массив
  count--;

  cout << "Student removed.\n";
}

double calculateAverage(const Student *students, int count)
{
  if (count == 0)
    return 0.0;
  double sum = 0.0;
  for (int i = 0; i < count; i++)
  {
    sum += students[i].grade;
  }
  return sum / count;
}

void displayStudents(const Student *students, int count)
{
  if (count == 0)
  {
    cout << "No students in the list.\n";
    return;
  }
  cout << "\n--- Student List ---\n";
  for (int i = 0; i < count; i++)
  {
    cout << "Name: " << students[i].name << ", Grade: " << students[i].grade << endl;
  }
}
