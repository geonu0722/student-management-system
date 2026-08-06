# Student Management System

C 언어로 구현한 콘솔 기반 학생 관리 시스템 프로젝트입니다.

구조체(`struct`), 포인터, 배열, 문자열 처리, 함수 분리, 헤더 파일 관리 등을 학습하기 위해 제작하고 있습니다.

---

# Development Environment

* Language : C
* Compiler : GCC
* Platform : OnlineGDB

---

# Project Structure

```text
StudentManagement
│
├── main.c
├── manage.c
├── manage.h
└── README.md
```

* **main.c**

  * 프로그램 실행 및 메뉴 관리
  * 사용자 입력 처리
  * 학생 관리 함수 호출

* **manage.c**

  * 학생 데이터 처리
  * CRUD 기능 구현

* **manage.h**

  * 구조체 정의
  * 함수 선언

---

# Data Structure

학생 정보를 하나의 구조체로 관리합니다.

```c
typedef struct Student{
    int id;
    char name[30];
    int age;
    double score;
} STU;
```

학생들은 구조체 배열에 저장됩니다.

```c
STU students[100];
```

---

# Implemented Features

## 1. Add Student

학생 정보를 입력받아 배열에 저장합니다.

입력 항목

* Student ID
* Name
* Age
* Score

---

## 2. Show Students

현재 저장되어 있는 모든 학생 정보를 출력합니다.

출력 예시

```text
========== Student List ==========

Student 1

ID     : 20260001
Name   : Kim
Age    : 20
Score  : 95.50
-------------------------
```

학생이 없는 경우

```text
No student data.
```

를 출력하도록 구현했습니다.

---

## 3. Search Student

학생 이름을 입력받아 배열을 순회하며 검색합니다.

검색 과정

```text
이름 입력
      ↓
학생 배열 순회
      ↓
strcmp()로 문자열 비교
      ↓
학생 발견
```

찾지 못한 경우

```text
Student not found.
```

을 출력합니다.

---

## 4. Update Student

학생 ID를 입력받아 해당 학생 정보를 수정합니다.

동작 과정

```text
ID 입력
      ↓
학생 검색
      ↓
현재 정보 출력
      ↓
이름 수정
나이 수정
점수 수정
      ↓
Update Complete!
```

이번 기능을 구현하면서 구조체 포인터를 이용하여 원본 데이터를 직접 수정하는 방법을 익혔습니다.

---

## 5. Delete Student

학생 이름을 입력받아 해당 학생을 삭제합니다.

삭제 과정

```text
학생 검색
      ↓
뒤 학생들을 앞으로 이동
      ↓
삭제 완료
```

삭제 기능을 구현하면서 배열에서 데이터를 제거하는 방법과 데이터를 한 칸씩 이동시키는 원리를 학습했습니다.

---

# What I Learned

이번 프로젝트를 진행하면서 다음 내용을 학습했습니다.

* 구조체(`struct`)를 이용한 데이터 관리
* 구조체 배열 사용
* 구조체 포인터(`->`) 사용
* 함수 분리 및 코드 재사용
* Header File 관리
* 문자열 입력 및 `strcmp()` 사용
* `strcpy()`를 이용한 문자열 복사
* 반복문을 이용한 데이터 탐색
* CRUD(Create / Read / Update / Delete) 구현

---

# Current Version

### v0.2

Completed

* [x] Add Student
* [x] Show Students
* [x] Search Student
* [x] Update Student
* [x] Delete Student

---

# Next Goals

다음 버전에서 구현 예정

* [ ] Delete 기능 개선 (학생 수 관리)
* [ ] ID 중복 검사
* [ ] 입력 예외 처리
* [ ] 학생 정렬 (ID / 이름 / 점수)
* [ ] 파일 저장 (Save)
* [ ] 파일 불러오기 (Load)

---

# Goal

이 프로젝트의 목표는 C 언어를 이용하여 데이터를 관리하는 프로그램을 직접 구현하고, 구조체, 포인터, 배열, 파일 입출력을 익히는 것입니다.

프로젝트를 완성한 후에는 파일 처리와 보안 개념을 활용한 다음 프로젝트(예: 비밀번호 관리 프로그램, 파일 암호화 프로그램)로 확장할 계획입니다.
