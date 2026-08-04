# Student Management System

C 언어로 구현한 콘솔 기반 학생 관리 시스템 프로젝트입니다.

C 언어의 구조체(`struct`), 포인터, 배열, 함수 분리, 헤더 파일 관리 등을 학습하기 위해 제작했습니다.

계산기 프로젝트 이후 실제 데이터를 저장하고 관리하는 프로그램을 만드는 것을 목표로 진행했습니다.

---

## Development Environment

* Language: C
* Compiler: GCC
* Platform: OnlineGDB

---

## Project Structure

```text
StudentManagement
│
├── main.c
├── manage.c
├── manage.h
└── README.md
```

### main.c

프로그램의 전체 흐름을 담당합니다.

* 메뉴 출력
* 사용자 입력 처리
* 학생 관리 함수 호출
* 프로그램 종료 관리

### manage.c

학생 데이터 처리 기능을 구현합니다.

* 학생 추가
* 학생 출력
* 학생 검색

### manage.h

공통으로 사용하는 구조체와 함수 선언을 관리합니다.

---

## Data Structure

학생 정보를 저장하기 위해 구조체를 사용했습니다.

```c
typedef struct Student{
    int id;
    char name[30];
    int age;
    double score;
} STU;
```

### Student Information

| 변수    | 설명    |
| ----- | ----- |
| id    | 학생 번호 |
| name  | 학생 이름 |
| age   | 나이      |
| score | 점수      |

여러 학생을 관리하기 위해 구조체 배열을 사용했습니다.

```c
STU students[100];
```

---

## Features

### 1. Add Student

학생 정보를 입력받아 배열에 저장합니다.

입력 정보:

* ID
* Name
* Age
* Score

동작 과정:

```text
Add Student
      ↓
학생 정보 입력
      ↓
students[count] 저장
      ↓
count 증가
```

---

### 2. Show Students

현재 저장된 모든 학생 정보를 출력합니다.

출력 예:

```text
========== Student List ==========

Student 1

ID    : 20260001
Name  : Kim
Age   : 20
Score : 95.5

----------------------------------
```

---

### 3. Search Student

학생 이름을 입력받아 해당 학생을 검색합니다.

검색 과정:

```text
이름 입력
    ↓
학생 배열 탐색
    ↓
strcmp()를 이용해 이름 비교
    ↓
일치하면 학생 정보 출력
```

---

## What I Learned

### 1. Structure (`struct`)

여러 데이터를 하나의 자료형으로 묶어 관리하는 방법을 배웠습니다.

```c
typedef struct Student{
    int id;
    char name[30];
    int age;
    double score;
} STU;
```

학생이라는 하나의 객체를 만들고 관리하는 방식에 대해 이해했습니다.

---

### 2. Pointer with Structure

구조체를 함수에 전달하기 위해 구조체 포인터를 사용했습니다.

예:

```c
void Add_stu(STU *stu);
```

포인터를 이용해 함수 내부에서 원본 구조체 데이터를 수정하는 방법을 학습했습니다.

---

### 3. Array Management

구조체 배열을 사용하여 여러 학생 데이터를 관리했습니다.

```c
STU students[100];
```

반복문을 통해 배열 내부 데이터를 탐색하고 출력하는 방법을 익혔습니다.

---

### 4. String Handling

C에서 문자열 비교는 `==`가 아닌 `strcmp()`를 사용해야 한다는 것을 배웠습니다.

```c
strcmp(students[i].name, name)
```

---

## Current Version

### v0.1

Completed:

* [x] Student structure design
* [x] Add Student
* [x] Show Students
* [x] Search Student

---

## Future Improvements

추가 예정 기능:

* [ ] Update Student Information
* [ ] Delete Student
* [ ] Student Sorting
* [ ] File Save / Load
* [ ] Input Exception Handling

---

## Goal

이 프로젝트를 통해 C 언어로 데이터를 관리하는 프로그램의 기본 구조를 이해하고, 이후 파일 처리와 보안 관련 프로젝트로 확장하는 것을 목표로 합니다.
