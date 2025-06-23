# kuBig2025
이 저장소는 고려대학교 세종 캠퍼스에서 C 수업을 받을 때 쓰는 저장소입니다.

C programming class
2025-03-04
1교시
Vmware 설치
Ubuntu 22.04 설치

2교시
Github 계정 생성
Github 저장소 생성
Github 저장소 Clone

3교시
리눅스 설명

4교시
간단한 프로그램 작성 nano (infinit.c)

5교시
C 언어 설명
자료형
숫자형 - 정수형, 실수형

6교시
온도 예제 작성 celcius2fahr.c

7교시
makefile 작성
make 실행
char 설명 및 예제 작성 charNumber.c

8교시
복습 및 정리


2025-03-05
1교시
복습
구글 슬라이드 작성(교육생 페이지)

2교시
연산자
폰 노이만 머신
메모리 연산

3교시
연산자
산술 연산자
증감연산자 - 예제 (전위 후위)
복합 대입연산자
리터럴 상수

4교시
리터럴 상수 예제 - literal.c

5교시
연산자
관계 연산자
논리 연산자
비트 연산자

6교시
연산자 예제 작성 - genderRatio compare compare2 sizeof oddeven

7교시
비트 연산자 예제 - fourBIt.c

8교시
정리


2025-03-06
1교시
복습
시험 - 데이터베이스

2교시
흐름 제어 설명
조건문 : if, switch, if else
반복문 : for, while, do while

3교시
if 문 예제 - absolute.c, leapYear.c

4교시
main argument 설명 argc, argv

5교시
분기문 예제 - absolute leafYear passFail grade grade2 posZeroNeg bigLetter

6교시
for 문 설명
for 문 예제 - one2Ten.c, one2TenSum.c

7교시
구구단 출력하기
이중 for 문 예제 - start.c

8교시
정리



2025-03-07
1교시
복습
반복문

2교시
while 문 설명
while 문 예제 - one2TenSumWhile.c

3교시

4교시
do while 문 설명
do while 문 예제 - one2TenSumDoWhile.c

5교시
함수
전역변수, 지역변수, 정적지역변수

6교시
break, continue 설명
break, continue 예제 - break.c, continue.c
배열

7교시
배열 예제 - dice.c, sumArray.c
이중 배열

8교시
baseball 게임 설명


2025-03-10
1교시
복습
baseball 게임 - 정답 풀이

2교시
배열 설명
swap 함수

3교시
정렬 - 선택정렬, 버블정렬, qsort

4교시
endian 설명
포인터, 이중 포인터 설명

5교시
함수 포인터
보이드 포인터
배열과 포인터

6교시
배열 과 포인터 예제

7교시
함수에서 포인터를 쓰는 예제 - swapFunction sumArrayFunction sumMatrixFunction

8교시
sumMatrixFunction2 - 일차원 배열로 변경 해서 넘기기
함수 에서 포인터가 쓰이는 종류 정리



2025-03-11
1교시
복습
함수 포인터
분할 컴파일 - 현대 차 번호

2교시
분할 컴파일 - 랜덤
makefile 로 분할 컴파일

3교시
구조체 설명

4교시
date 구조체 예시
다양한 선언

5교시
문자열 - 문자열 상수, 문자열 배열

6교시
문자열 함수 예제 - stringExample.c
파일 생성- 파일 포인터, 파일 디스크립터

7교시
문자열 라이브러리 작성
myString.h

8교시



2025-03-12
1교시
복습
MySQL 설명

2교시
MySQL 설치
권한 설정, DB 생성, TABLE 생성
MySQL 종료

3교시
root 계정으로 user 생성, 데이터베이스 생성, 테이블 생성
Book 테이블 생성 후 insert 로 데이터 입력

4교시
libmysqlclient 설치 (sudo apt install libmysql++*)

5교시
ip 해석 및 포트포워딩과 포트오픈 실습실의 상황 설명

6교시
bookSql.c 작성 - mysql 연결, 데이터베이스 선택, 쿼리 실행

7교시
CMake 설명 및 예제
cmake 설치 - sudo apt install cmake build-essential gdb gcc ( 반드시 build-essential 설치 )
CMakeLists.txt 작성
디버깅 사용 방법 - c89 Vscode 에서의 cmake kit 설정 문제가 있음 -> /home/aa/.local/share/CMakeTools/cmake-tools-kits.json 내용 변경.

8교시
정리
[과제] bookSql.c 에 함수 추가 - insertBook



2025-03-13
1교시
복습
CMake VsCode 설정 - 디버깅

2교시
cmake 프로젝트의 subdirectory 설정
c89 Vscode 에서의 cmake kit 설정 문제가 있음 -> /home/aa/.local/share/CMakeTools/cmake-tools-kits.json 내용 변경.
동적 할당 설명 - malloc, calloc, realloc, free

3교시
동적 할당 예제
공용체, 열거형 설명 - union, enum

4교시
공용체, 열거형 예제 - unionExample.c enumExample.c

5교시
bookSql 에 enum, 동적할당 적용

6교시
sql 예제 - bookSql.c
[과제]함수 추가 - deleteBook, updateBook, queryBook

7교시
과제 수행

8교시
정리



2025-03-14
1교시
복습
CMakeLists.txt sub_directory 추가

2교시
[과제]함수 추가 - deleteBook, updateBook, queryBook

3교시
표준 입력 함수 - scanf, sscanf, fscanf, getchar, gets, fgetc, fgets

4교시
표준 출력 함수 - printf, sprintf, fprintf, putchar, puts, fputc, fputs
fflush() 예제

5교시
Sql 분할 컴파일

6교시
교재 살펴보기

7교시
교재 살펴보기
볼링 게임 안내 [C 언어] 메인 과제
규칙: 개인전
각자 자신의 점수를 기록하고 마지막에 총점을 계산하여 승자를 결정한다.
점수 계산 링크

8교시
정리



2025-03-17
1교시
복습 - 표준 입출력 함수
[실습]볼링 게임

2교시
[실습]볼링 게임

3교시

4교시
[실습]볼링 게임
4교시
[실습]볼링 게임

5교시

6교시
[실습]볼링 게임

7교시
시험 - 구글 폼
8교시
정리

Atmega128 - embedded programming

수업 목표
Atmega128을 이용한 임베디드 프로그래밍을 통해 하드웨어와 소프트웨어를 연결하는 방법을 익힌다.
Atmega128의 기본적인 사용법을 익히고 이를 이용한 프로젝트를 수행한다.
Atmega128의 입출력을 이용한 프로젝트를 수행한다.

# Atmega128

---

## 2025-03-18

---

- 1교시
  - 사업 안내 - 국민취업지원 제도안내
- 2교시
  - 복습
  - MCU 에 대한 설명
- 3교시
  - Atmega128 소개
- 4교시
  - platformio 설치
  - 간단한 프로그램 작성 - PORTC 레지스트 변경 및 딜레이
- 5교시
  - permission 문제 해결
    - lsusb -> usb 장치 확인
    - ls -l /dev/bus/usb/001/009 -> 장치 접근 권한 확인
    - sudo chmod 666 /dev/bus/usb/001/009 -> 장치 접근 권한 변경
    - SUBSYSTEM=="usb", ATTR{idVendor}=="03eb", ATTR{idProduct}=="2104", MODE="0666"
- 6교시
  - 간단한 프로그램 작성 - PORTC 레지스트 변경 및 딜레이
  - 좌우로 반복하는 LED 코드 완성
- 7교시
  - 입력 프로그램 작성 스위치
  - PINE 레지스터
  - PINE 레지스터를 사용하여 스위치 입력
- 8교시
  - 정리

---

## 2025-03-19

---

- 1교시
  - 복습
  - switch 예제
- 2교시
  - chattering  문제
  - 디바운싱 해결
- 3교시
  - _delay_ms() 없이 디바운싱 문제 해결
- 4교시
  - FND 실습 - 7세그먼트, no _delay code
  - FND 실습 - 버튼과 연결해서 숫자를 바꾸는 코드
- 5교시
  - 인터럽트 - 타이머 인터럽트, 외부 인터럽트 , 인터럽트 벡터 테이블
- 6교시
  - 외부 인터럽트 활용 프로그램 - FND 과제
  - uart 설명
- 7교시
  - uart 를 이용한 FND 숫자 출력 - PC -> Atmega128
  - uart0 라이브러리 작성 및 적용
- 8교시
  - 정리

---

## 2025-03-20

---

- 1교시
  - 복습
  - uart0.h uart1.c 라이브러리 작성
- 2교시
  - udev 세팅
    - sudo nano /etc/udev/rules.d/99-avrisp.rules
    - sudo udevadm control --reload
    - sudo udevadm trigger
  - stream 설정
    - stdout, stdin -> FDEV_SETUP_STREAM
- 3교시
- 4교시
  - uart3 실습 파일 스위치 정보 PC 로 전송
  - uart3 실습 파일 PC 에서 스트링 정보 Atmega128 로 전송
- 5교시
  - ADC 실습 - 조도 센서 프린트
  - timer0 실습 - LED 제거 1초 세팅
- 6교시
  - timer2 실습 - TCCR2 설정시 주의  TCCR0 와 다름
- 7교시
  - pwm 구현 timer0 비교기 compare output mode 설정
- 8교시
  - 정리

---

## 2025-03-21

---

- 1교시
  - 복습
  - 16비트 타이머timer1 오버플로우 벡터로 LED 점멸
- 2교시
  - 16비트 타이머timer3 오버플로우 벡터로 LED 좌우 이동
- 3교시
  - 16비트 타이머3 캡쳐 인터럽트  - 외부 인터럽트
- 4교시
  - 16비트 타이머1 compare 인터럽트 - 버튼 누른 시간 출력 FND
  - 16비트 타이머1 FND 숫자 증가 및 감소 compare 및 overflow 인터럽트 동시 사용
- 5교시
  - PWM buzzer - 도레미 출력 OC 핀 설정
- 6교시
  - buzzer, 버튼, FND 통합 예제 [실습] - ch7_3_buzzerapp
- 7교시
  - servopwm 제어
- 8교시
  - 정리

---

## 2025-03-24

---

- 1교시
  - 복습
  - DC 모터 제어
- 2교시
  - DC 모터 PWM 제어
- 3교시
  - 동기 방식, 비동기 방식, 전이중 방식, 반이중 방식 에 의한 분류(SPI, I2C, UART, one-wire)
  - SPI 설명 및 실습 - 외부 eeprom 예제
- 4교시
  - 메모리 종류(flash, sram, eeprom)와 내부 eeprom
  - ic2 통신 설명
- 5교시
  - 라이브러리 리뷰 - TWI.h, TWI.c, sht20.h, sht20.c
  - ic2 예제 i2c_tempHumi.c
- 6교시
  - 최종 예제 eeprom_temp.c(온도센서, eeprom, uart, interrupt)
- 7교시
  - 교재 복습
- 8교시
  - 시험

  라즈베리파이 4B

  수업 목표
라즈베리파이 OS 를 이해 한다.
OS 운영체제에 대해서 이해 하고 여러가지의 프로세스를 다루는 방식을 익힌다.
라즈베리파이4B의 GPIO 핀 과 각종 I2C 장치의 사용법을 익힌다.
커널에 모듈을 적용하는 방법을 이해 한다.
스크립트 프로그래밍을 통해 자동화된 시스템을 구축하는 방법을 익힌다.

# 라즈베리파이

---

## 2025-04-01

---

- 1교시
  - 라즈베리파이 OS 이미지 굽기
- 2교시
  - 운영체제론 설명
  - 리눅스 설명 - 오픈 소스, 버전
- 3교시
  - VsCode ssh remote 설정
- 4교시
  - wiringPi 설치
  - GPIO 핀 설정 및 초기화 - add group, set mode 설명(이미 되어 있음)
  - helloRaspberry.c 코드 작성 - 간단한 gpio LED 제어
- 5교시
  - switch_led.c 코드 작성 - 스위치와 LED 제어
  - open 과 write close 로 gpio 제어 -> 작동 안함
- 6교시
  - 커널 설명 - 커널 모드, 사용자 모드, 커널 영역, 사용자 영역
  - system call 설명 - strace 명령어 실습
  - 실습 장비 설명 ES-101(하드웨어 및 핀맵)
- 7교시
  - module_exam.c , Makefile 작성
- 8교시
  - insmod, rmmod 로 커널 모듈 로드 및 언로드
  - 커널 모드와 사용자 모드의 차이점 설명
  - 정리

---

## 2025-04-02

---

- 1교시
  - 복습
  - 여러 프로세스 다루기 ( &, nohup, bg, fg, jobs, ps, kill, top, htop)
- 2교시
  - 데몬으로 프로세스 작동 시키기
- 3교시
  - mydaemon.service 파일, mydaemon.sh 파일 작성
  - systemctl 명령어 설명
- 4교시
  - wiringPi 로 pwm 제어하기, 버저 설정
  - software pwm 제어하기, hardware pwm 제어하기, buzzer 제어하기
- 5교시
  - PCA9685 설명
  - PCA9685 제어하기
- 6교시
  - 커널 모듈 설명
- 7교시
  - RGB LED 제어하기
  - RGB LED 제어하기 - PWM
- 8교시
  - servo 제어하기 - PWM
  - 정리

---

## 2025-04-03

---

- 1교시
  - 복습
  - 커널 모듈 설명
  - led_driver.c 코드 작성
  - Makefile 작성
- 2교시
  - switch_interrupt.c 코드 작성
- 3교시
  - export_symbol 모듈 작성
- 4교시
  - GPL 설명
- 5교시
  - character device driver 설명
  - led_driver.c
- 6교시
  - switch_driver.c 코드 작성
- 7교시
  - led_switch_driver 실습
- 8교시
  - 정리

---

## 2025-04-04

---

[라즈베리파이 하드웨어](https://www.raspberrypi.com/documentation/computers/raspberry-pi.html)
[커널 교재](https://sysprog21.github.io/lkmpg/#sticking-your-head-inside-a-large-carnivore)
[커널 예제 코드](https://github.com/PacktPublishing/Linux-Kernel-Programming)

- 1교시
  - 복습
  - ioremap 설명, 라즈베리파이4B IO register 설명
  - 가상메모리, 물리메모리 설명
  - gpiomem_module.c 코드 작성
- 2교시
  - FND, 74HC595 칩 설명(latch, clock, data)
  - fnd_cnt.c 코드 작성
- 3교시
  - rgb_switch_fnd.c 작성 [실습]
- 4교시
  - PIR 센서 설명 - GPIO 핀 - 인터럽트가 작동 하지 않았음.... 다른 핀과 겹치는듯
  - 터치 센서 값 읽기 - I2C touch_ATQT1070 IC 칩 데이터 시트
- 5교시
  - 온습도 센서 값 읽기 - I2C SHT20 IC 칩 데이터 시트
  - 자이로 센서 값 읽기 - I2C MPU6050 IC 칩 데이터 시트
- 6교시
  - 자이로 센서 활용 실습 - 라즈베리파이4B 실습 상자 움직임 감지 -> 버저, LED 점등
- 7교시
  - 자이로 센서 활용 코드 - gyro_detect.c 작성
  - 오디오 실습 - WM8960 칩 설명
- 8교시
  - dts config.txt 파일 수정, github 커널모듈 설치, aplay -l 확인
  - sound.c 코드 실습 - 스피커 소리 출력 및 마이크 입력 테스트
  - 정리

---

## 2025-04-07

---
[스크립트 코드](https://www.freecodecamp.org/news/bash-scripting-tutorial-linux-shell-script-and-command-line-for-beginners/?utm_source=chatgpt.com)

- 1교시
  - 복습
  - 스크립트 작성법 설명
- 2교시
  - bash 스크립트 작성법 설명
  - hello.sh 코드 작성 - 변수, echo, read, export, 환경변수, local
  - if문, for문, while문, until문 연산자, 논리 연산자, case문
- 3교시
  - 반복문, 함수 설명
  - flow_exec.sh 코드 작성
  - 스크립트 자동화 기법 설명
- 4교시
  - cron 설명, crontab을 사용하여 스크립트 자동 실행하기
  - 스크립트 실행 주기 설정 방법 설명 - crontab -e, crontab -l
  - grep CRON /var/log/syslog
  - 정리

  CPP
  수업 목표
C++ 언어의 기본 문법을 익히고 객체 지향 프로그래밍을 이해한다.
C++ STL을 이용한 자료구조와 알고리즘을 이해한다.
C++의 고급 문법을 익히고 이를 이용한 프로젝트를 수행한다.
C++의 메모리 관리와 스마트 포인터를 이해한다.

# CPP

---

## 2025-04-21

---

- 5교시
  - STL 소개
  - vector - push_back, pop_back, size, capacity
- 6교시
  - iterator - begin, end, rbegin, rend
- 7교시
  - modern c++
  - auto 키워드
- 8교시
  - 범위 기반 for문

---

## 2025-04-22

---

- 1교시
  - 복습
  - string 정규 헤더 - size, capacity, length, clear, empty, begin, end ...
- 2교시
  - STL - 컨테이너 계보
  - STL - map
- 3교시
  - list - push_back, pop_back, size, capacity
  - vector_list 비교 - vector_list1,2 코드 작성
- 4교시
  - 람다 함수
  - 함수 객체
  - DataProcessor 클래스 작성
- 5교시
  - DataProcessor 클래스 - 추가 작성 [=], mutable
  - 범위 for 문을 위한 코드 - forClass 작성
- 6교시
  - nullptr 설명
  - constexpr 설명
- 7교시
  - 통합 예제 작성 range_example.cpp
- 8교시
  - 정리

---

## 2025-04-23

---

- 1교시
  - 복습
  - priority_queue 연습 - priority_queue.cpp
- 2교시
  - fstream 파일에서 불러오기
  - unordered_map - word_count
- 3교시
  - sstream 사용법
  - 알고리즘 transform, copy, copy_if, sort, find
  - - sort_fstream.cpp - 파일 읽기
- 4교시
  - sort_fstream2.cpp - class 캡슙화
  - partition, merge
- 5교시
  - unique_ptr
  - move() 이동 연산
- 6교시
  - shared_ptr
- 7교시
  - 순환 참조 문제
  - weak_ptr
- 8교시
  - 정리

---

## 2025-04-24

---

- 1교시
  - 복습
  - TreeNode 예제 - shared_ptr 연습
- 2교시
  - move() 연산자를 이용한 속도 비교 - moveVector.cpp
  - forward<>() 를 이용한 인자 전달 - forward.cpp
- 3교시
  - move() 가 인식되는 인자를 차용한 class 만들기 - moveClass.cpp
    - reference count 는 적용 되지 않음 직접 구현 해야 한다.
    - 왠만 하면 smart_ptr 사용하자.
- 4교시
  - variant, optional 예제.
  - vscode 의 세팅 C++23 으로 변경, cmake 세팅 C++23 으로 변경
- 5교시
  - any 예제 추가 - variantOptional.cpp
  - thread, mutex 예제 - thread.cpp
- 6교시
  - async, future 예제 - asyncFuture.cpp
  - asyncFutre 예제 - 로깅 추가, join 추가
- 7교시
  - multithread 에제 - multithreadTask.cpp
  - finalModernExample 실습 - DataBase 만들기
- 8교시
  - 정리

---

## 2025-04-25

---

- 1교시
  - 복습
  - 명품 C++ 책 리뷰 1~4
- 2교시
  - 명품 C++ 책 리뷰 5~10
- 3교시
  - 명품 C++ 책 리뷰 10~13
- 4교시
  - 시험
- 5교시
  - 정리

  TCP/IP 네트워크 프로그래밍
  수업 목표
IPC의 기본 개념을 이해하고, shm, pipe, mqueue,
socket, select, poll, epoll을 이용한 IPC 프로그래밍을 이해한다.
TCP/IP의 기본 개념을 이해하고, TCP/IP 소켓 프로그래밍을 익힌다.
TCP/IP 네트워크 프로그래밍의 기본 개념을 이해한다.
TCP/IP 프로토콜의 기본 개념을 이해하고, TCP/IP 소켓 프로그래밍을 익힌다.

# TCPIP

---

## 2025-04-28

---

- 1교시
  - 네트워크 프로그래밍이란
  - IPC 의 이해 Data 의 프로세스간 전송
  - 공유메모리 예제 작성
- 2교시
  - shm 예제
  - semaphore 예제 작성
- 3교시
  - shm_test2 예제 - semaphore 가 없을 때 문제 상황
  - pipe 예제 작성
- 4교시
  - mkfifo - mkfifo 예제 작성
- 5교시
  - mqueeue 예제 작성
  - server, client 코드
- 6교시
  - tcp server, tcp client 예제 작성
- 7교시
  - ninja 설정 하는 방법
- 8교시
  - ss -tulpn -socket statictics
  - 옵션 설명

---

## 2025-04-29

---

- 1교시
  - 복습
  - inet_addr 함수 설명
  - inet_pton 함수 설명(iton 함수 사라짐. ipv4, ipv6 모두 지원)
  - inet_ntoa 함수 실습
- 2교시
  - echo_server 예제 작성
- 3교시
  - echo_client 예제 작성
- 4교시
  - 수신된 메시지의 전체 길이를 보장하도록 수정(server, client)
- 5교시
  - ninja 설정
  - op_server 예제 작성
- 6교시
  - op_client 예제 작성
- 7교시
  - udp 설명
  - uecho_server 예제 작성
  - uecho_client 예제 작성
- 8교시
  - boundhost 예제 작성(경계가 존재 한다는 예시)
  - 정리

---

## 2025-04-30

---

- 1교시
  - 복습
  - file_server 작성 - 우아한 종료 halfclose
- 2교시
  - file_client 작성
- 3교시
  - info.c 작성 다양한 내부 변수 확인 버퍼크기 및 큐 사이즈
- 4교시
  - DNS 설명
  - gethostbyname, getaddrinfo 설명
- 5교시
  - zombie 프로세스 설명
  - fork 예제 작성 zombie 프로세스
- 6교시
  - wait, waitpid 설명 - 좀비 프로세스 해결
  - signal 설명 - ipc 폴더에 sigal.c 작성, sigaction.c 작성(인텔리센스 인식 오류 해결)
- 7교시
  - 멀티 프로세서 코드 작성 forck, waitpid, signal -> echo_mpserver.c
  - echo_mpclient.c 작성
- 8교시
  - select_pipe 예제 작성
  - 정리

---

## 2025-05-01

---

- 1교시
  - 복습
  - select_pipe 예제 디버깅
- 2교시
  - select_pipe 예제 -배열과 함수 사용
- 3교시
  - 멀티플렉싱 echo_server 작성(select)
- 4교시
  - 멀티플렉싱 echo_client 작성(select)
- 5교시
  - 다양한 입출력함수 설명 send, recv, readv, writev
  - 멀티 캐스팅
    - 학생 절반이 메세지를 받지 못함(아마도 방확벽 때문인듯)
- 6교시
  - 소켓과 표준입출력 fileno, fdopen, 이중 버퍼 문제 fflush
  - 브로드캐스팅(한명 빼고 다 받음)
- 7교시
  - epoll 설명
  - epoll 예제 작성 (pipe 서버)
- 8교시
  - select_pipe 예제 작성
  - 정리
  - redis, mqtt, http, https, websocket, grpc, rest, GraphQL, WebRTC, CoAP, kafka

---

## 2025-05-02

---

- 1교시
  - 복습
  - echo epollserver 디버깅- fd 설정 오류
- 2교시
  - 쓰레드 설명!
  - thread_test.c 작성
- 3교시
  - thread_test2.c 작성
- 4교시
  - chat_srv.c 작성
- 6교시
  - multithread echo_server 작성
  - multithread echo_client 작성
- 7교시
  - multithread echo_server 작성 수정 - 구조체 추가
  - 2차 프로젝트, 파이널 프로젝트 팀 구성
- 8교시
  - 시험

  Python
수업 목표
Python의 기본 문법을 익히고 객체 지향 프로그래밍을 이해한다.
Python의 다양한 라이브러리를 활용한 데이터 처리 및 분석 방법을 익힌다.
Python을 이용한 웹 프로그래밍의 기초를 이해한다.
Python의 테스트 및 디버깅 기법을 익힌다.

# PYTHON

---

## 2025-05-07

---

- 1교시
  - 파이썬 언어 설명
  - 특징 : 인터프리터 언어, 동적 타이핑, 객체 지향 언어, 플랫폼 독립적 언어
  - 장점 : 간결한 문법, 다양한 라이브러리 지원, 커뮤니티가 활발함
- 2교시
  - 파이썬 주의 사항 : indentation, 대소문자 구분, 주석
- 3교시
  - pythonInterpreter 작성, pythonInterpreter2 작성
  - type : int , float, str, list
- 4교시
  - python frame 설명: sys._getframe -> C언어의 PyFrameObject
  - python 의 객체 :
    - PyObject : 모든 객체의 기본 클래스
    - PyFrameObject : 함수 호출 시 생성되는 객체
    - PyTypeObject : 객체의 타입을 정의하는 구조체
    - PyCodeObject : 바이트코드를 저장하는 구조체
  - frame.f_back, f_code, f_locals, f_globals
  - locals() : 현재 지역변수
  - globals() : 현재 전역변수
  - vars() : 현재 전역변수 + 지역변수
- 5교시
  - string class 설명
  - 연산자 : +, *, -, /, %, //, **, in, not in
- 6교시
  - input 함수 설명 -> return str class!
  - indentation 주의 : C 언어의 블럭 {} 역할
  - 스트링 정의 "", '', """ """, ''' ''' 차이점
- 7교시
  - 스트링 클래스 메소드 :
    - find, rfind, index, rindex, count, replace
    - split, join, strip, lstrip, rstrip
    - upper, lower, title, capitalize
    - isalpha, isdigit, isalnum, isspace
- 8교시
  - 과제:
    - 파이썬으로 구구단 출력하기 2단 -> 9단
    - 섭씨->화씨 변환 프로그램 input -> casting -> 연산 -> 출력
    - 문자열을 입력 받아서 단어를 카운트 해서 결과를 출력하세요
  - 정리

---

## 2025-05-08

---

- 1교시
  - 복습
  - 3D 프린터 사용법 설명(bambu studio)
- 2교시
  - 제어 흐름 설명 if - else, elif
  - import 설명 - module(.py), package(폴더), library(.so, .pyi)
  - 환경변수 env, PATH, PYTHONPATH
- 3교시
  - datetime 모듈
  - 과제 - 오전오후, 계절 출력
- 4교시
  - 리스트 설명
  - list 메소드 : append, extend, insert, remove, pop, index, count, sort, reverse
- 5교시
  - range 설명, for문 설명, tuple 설명
  - enumerate 예시.
- 6교시
  - 동적 로딩 dynamic loading 설명
  - dlMain.c, plugin.c 작성
  - dlopen, dlsym, dlclose 설명
- 7교시
  - mymodule.c 작성
- 8교시
  - setup.py 작성 및 패키지 설치
  - 정리

---

## 2025-05-09

---

- 1교시
  - 복습
  - dictionary 설명 - key, value, pop, update, items, keys, values
- 2교시
  - while문 설명 - break, continue
  - time 모듈 - sleep, time, localtime, strftime
- 3교시
  - list comprehension 설명
  - nim, max, sum 설명
- 4교시
  - 함수의 argument 설명 - default, keyword, positional, variable-length
  - return 설명
  - packing, unpacking 설명
- 5교시
  - 재귀함수
  - lru_cache, cache 설명
- 6교시
  - 일경험 프로그램 설명
  - 파이썬에서의 함수 객체, static 처럼 변수 쓰기
  - lambda 함수 설명
- 7교시
  - 람다 함수 예제
  - 파일 처리, open, read, write, close
- 8교시
  - with open 설명
  - fd 확인 및 print를 이용해서 파일 처리 (file 옵션)
  - 정리

---

## 2025-05-12

---

- 1교시
  - 복습
  - generator 설명 - yield, next, send
- 2교시
  - iterator 설명 - __iter__, __next__
  - 에러 처리 - try, except, finally, raise
  - Exception class, MinusError class 작성
  - 사용자 정의 예외 처리 방법 설명
- 3교시
  - random 모듈 설명 - random, randint, choice, shuffle, sample, uniform, randrange
- 4교시
  - random 의 균등 분포, 정규 분포 설명 (matplotlib)
- 5교시
  - 내부 모듈 설명 - os, sys, time, math, urllib - (argparse, beatifulsoup)
- 6교시
  - 외부 모듈 설명
    - 웹 : flask, django, gradio, fastapi, dash, streamlit
    - 빅데이터 : numpy, pandas, matplotlib, seaborn
    - AI : scikit-learn, tensorflow, keras, pytorch
    - 게임 : pygame
    - GUI : tkinter, PyQt, wxPython, openCV
    - DB : sqlite3, mysql-connector-python
    - 네트워크 : socket, twisted, asyncio
    - 테스트 : unittest, pytest
    - 문서화 : sphinx, pydoc
    - 패키지 관리 : pip, conda, poetry, uv
- 7교시
  - setuptools 패키지 작성 및 설치
  - uv_test 패키지 작성 및 설치
- 8교시
  - 패키지 심화 설명 - 가상환경, docker, uv, venv, poetry, conda
  - 정리

---

## 2025-05-13

---

- 1교시
  - 복습
  - 가상 환경 설명
- 2교시
  - venv 설명 및 실습 - path 관리 하는 기본적인 도구
  - myenv 실습 - pip 및 PATH 환경 변수 확인
- 3교시
  - miniconda 설명 및 실습 - conda, pip, venv
  - myconda 실습 - conda 및 PATH 환경 변수 확인
  - poetry 설명 및 실습 - 패키지 관리 도구
    - activate 할 필요 없음 ( poetry shell -> 실습 안됨...)
    - lock 파일로 패키지 버전 관리
    - 폴더 별 pyproject.toml 로 관리
    - poetry add, remove, update, build, publish
    - poetry run python
  - CI/CD 설명 - github actions, travis, circleci, jenkins
- 4교시
  - docker 설명 및 실습 - 컨테이너 관리 도구
  - VsCode dev container 설명 및 실습
- 5교시
  - dockerfile 작성 및 실습
  - flask 예제
- 6교시
  - docker-compose 설명 및 실습
  - app.py 작성
- 7교시
  - docker-compose 파일 작성 및 실습 - flask
- 8교시
  - dict class student 작성
  - 정리

---

## 2025-05-14

---

- 1교시
  - 복습
  - 클래스 설명
  - student class 작성
- 2교시
  - student class 메소드 작성
  - 생성자 __init__ 설명 및 __new__ 설명 - singleton 패턴 실습
  - 데이터 파일저장과 읽기로 student class 수정
  - pickle 을 이용한 객체 직렬화 설명
- 3교시
  - special method 설명(dunder method)
  - operator overloading 설명
  - __str__, __repr__, __add__, __sub__, __mul__, __truediv__, __floordiv__, __mod__, __pow__
  - __lt__, __le__, __eq__, __ne__, __gt__, __ge__
- 4교시
  - 소멸자 __del__ 설명
  - 클래스 상속
  - super() 설명
  - mro() 설명
- 5교시
  - dataclass 설명
  - dataclass 실습, list, dict, default_factory 사용하여 초기화
- 6교시
  - meta-programming 설명
  - __getattr__, __setattr__, __delattr__, __call__, __getitem__, __setitem__, __delitem__
  - setattr 예제
- 7교시
  - 래퍼함수 작성
  - 데코레이터 만들기 실습
  - time check 데코레이터 실습
- 8교시
  - threading 실습
  - 정리

---

## 2025-05-15

---

- 1교시
  - 복습
  - asyncio 설명
  - async, await 설명
- 2교시
  - a
- 3교시
  - a
- 4교시
  - a
- 5교시
  - a
- 6교시
  - a
- 7교시
  - a
- 8교시
  - 정리

  OpenCV 교육 과정

  2025-05-27

1교시
OpenCV 소개
OpenCV의 역사 및 발전 과정
OpenCV의 주요 기능 및 활용 분야

2교시
프로젝트에서의 활용 형태 및 예시
OpenCV 설치 및 환경 설정
이미지 처리 - 빛, 양자화, 샘플링
기본적인 이미지 처리 기법 소개 - imread, imshow, namedWindow, waitKey

3교시
openCV 의 옵션 flags
ENUM class 를 활용한 int flag ( ex imread IMREAD_COLOR IMREAD_GRAYSCALE )
Vector 형식의 vector<int> flags ( ex: imwrite jpeg_quality )
OpenCV의 이미지 입출력 - imwrite jpeg

4교시
기본 클래스 Point_<> 클래스
기본 클래스 Size_<> 클래스

5교시
기본 클래스 Rect_<> 클래스
기본 클래스 Scalar_<> 클래스
InputArray, OutputArray, InputOutputArray

6교시
Mat 클래스
Mat 클래스의 생성자
Mat 클래스의 속성 (rows, cols, channels, type)
Mat 클래스의 데이터 접근 (at, ptr)
Mat 클래스의 복사 및 할당

7교시
Mat 클래스의 연산
Mat 클래스의 연산자 오버로딩
Mat 클래스의 기본 연산 (덧셈, 뺄셈, 곱셈, 나눗셈)
Mat 클래스의 비교 연산

8교시
간단한 video 처리
VideoCapture, VideoWriter
imshow, waitKey
동영상 재생 및 저장
정리

2025-05-28
1교시
복습
Video 처리 - 에러 처리, release, 동영상 저장(VideoWriter), fourcc

2교시
drawing
선 (line), 원(circle), 사각형(rectangle), 타원(ellipse)

3교시
글자 (putText)
한글글자 (freetype) - 래퍼함수 작성

4교시
마우스 이벤트(setMouseCallback)
마우스 이벤트의 종류 및 처리 방법
마우스 이벤트를 선 그리기

5교시
트랙바 (trackbar)
트랙바의 생성 및 사용법
트랙바를 이용한 이미지 필터링

6교시
파일저장 fileStorage
XML, YAML 파일 저장
FileStorage 클래스의 사용법

7교시
웹캠 abko 설정
캠-사각형 그리기 코드 작성

8교시
일경험 안내
정리

2025-05-29
1교시
복습
마스크 연산

2교시
tickMeter 클래스를 이용한 fps 조절

3교시
밝기 조절 - 경계값0~255(cast) 자동 적용.
대비 조절- 중앙 값 기준 곱하기, histostretch, equalizeHist

4교시
히스토그램 그래프 그리기

5교시
convolution 필터 원리
filter2D, blur, GaussianBlur

6교시
bilateralFilter, medianBlur

7교시
affineTransform, warpAffine

8교시
perspectiveTransform, warpPerspective ( cam 예제 작성)
정리

2025-05-30
1교시
복습
엣지 검출
Sobel 마스크 설명

2교시
Sobel 예제 작성
Canny edge detection
cam + trackbar - canny edge 예제 작성

3교시
Hough Transform 개념 설명
HoughLines, HoughLinesP

4교시
HoughCircles

5교시
색상 공간 변환
RGB, HSV, YCrCb, Lab
merge, split, addWeighted 컬러 연산
inrange - 특정 색상 범위 추출(이진화)

6교시
이진화
threshold, adaptiveThreshold

7교시
morphology 연산
erode, dilate, morphologyEx
morphologyEx - opening, closing, gradient, top hat, black hat
레이블링 연산
connectedComponents, connectedComponentsWithStats
contours
findContours, drawContours

8교시
inrange 로 물체 따라 다니는 사각형 그리기
정리

2025-06-2
1교시
복습
객체 검출 - Haar Cascade

2교시
객체 검출 - Hog Descriptor
Hog Descriptor 예제 작성

3교시
QR 코드 검출
aruco 검출

4교시
특징점 검출 Corner - Harris, FAST, GoodFeaturesToTrack

5교시
ORB 특징점 검출 을 이용한 실시간 cam 객체 추적 예제

6교시
선형 2x+1 에 대한 선형 회귀 분석

7교시
시험
정리

OpenCV 교육 과정
2025-05-27
1교시
OpenCV 소개
OpenCV의 역사 및 발전 과정
OpenCV의 주요 기능 및 활용 분야

2교시
프로젝트에서의 활용 형태 및 예시
OpenCV 설치 및 환경 설정
이미지 처리 - 빛, 양자화, 샘플링
기본적인 이미지 처리 기법 소개 - imread, imshow, namedWindow, waitKey

3교시
openCV 의 옵션 flags
ENUM class 를 활용한 int flag ( ex imread IMREAD_COLOR IMREAD_GRAYSCALE )
Vector 형식의 vector<int> flags ( ex: imwrite jpeg_quality )
OpenCV의 이미지 입출력 - imwrite jpeg

4교시
기본 클래스 Point_<> 클래스
기본 클래스 Size_<> 클래스

5교시
기본 클래스 Rect_<> 클래스
기본 클래스 Scalar_<> 클래스
InputArray, OutputArray, InputOutputArray

6교시
Mat 클래스
Mat 클래스의 생성자
Mat 클래스의 속성 (rows, cols, channels, type)
Mat 클래스의 데이터 접근 (at, ptr)
Mat 클래스의 복사 및 할당

7교시
Mat 클래스의 연산
Mat 클래스의 연산자 오버로딩
Mat 클래스의 기본 연산 (덧셈, 뺄셈, 곱셈, 나눗셈)
Mat 클래스의 비교 연산

8교시
간단한 video 처리
VideoCapture, VideoWriter
imshow, waitKey
동영상 재생 및 저장
정리

2025-05-28
1교시
복습
Video 처리 - 에러 처리, release, 동영상 저장(VideoWriter), fourcc

2교시
drawing
선 (line), 원(circle), 사각형(rectangle), 타원(ellipse)

3교시
글자 (putText)
한글글자 (freetype) - 래퍼함수 작성

4교시
마우스 이벤트(setMouseCallback)
마우스 이벤트의 종류 및 처리 방법
마우스 이벤트를 선 그리기

5교시
트랙바 (trackbar)
트랙바의 생성 및 사용법
트랙바를 이용한 이미지 필터링

6교시
파일저장 fileStorage
XML, YAML 파일 저장
FileStorage 클래스의 사용법

7교시
웹캠 abko 설정
캠-사각형 그리기 코드 작성

8교시
일경험 안내
정리

2025-05-29
1교시
복습
마스크 연산

2교시
tickMeter 클래스를 이용한 fps 조절

3교시
밝기 조절 - 경계값0~255(cast) 자동 적용.
대비 조절- 중앙 값 기준 곱하기, histostretch, equalizeHist

4교시
히스토그램 그래프 그리기

5교시
convolution 필터 원리
filter2D, blur, GaussianBlur

6교시
bilateralFilter, medianBlur

7교시
affineTransform, warpAffine

8교시
perspectiveTransform, warpPerspective ( cam 예제 작성)
정리

2025-05-30
1교시
복습
엣지 검출
Sobel 마스크 설명

2교시
Sobel 예제 작성
Canny edge detection
cam + trackbar - canny edge 예제 작성

3교시
Hough Transform 개념 설명
HoughLines, HoughLinesP

4교시
HoughCircles

5교시
색상 공간 변환
RGB, HSV, YCrCb, Lab
merge, split, addWeighted 컬러 연산
inrange - 특정 색상 범위 추출(이진화)

6교시
이진화
threshold, adaptiveThreshold

7교시
morphology 연산
erode, dilate, morphologyEx
morphologyEx - opening, closing, gradient, top hat, black hat
레이블링 연산
connectedComponents, connectedComponentsWithStats
contours
findContours, drawContours

8교시
inrange 로 물체 따라 다니는 사각형 그리기
정리

2025-06-2
1교시
복습
객체 검출 - Haar Cascade

2교시
객체 검출 - Hog Descriptor
Hog Descriptor 예제 작성

3교시
QR 코드 검출
aruco 검출

4교시
특징점 검출 Corner - Harris, FAST, GoodFeaturesToTrack

5교시
이론 설명 - Keypoint, Descriptor, DMatch 클래스
객체 추적 순서 - 특징점 검출, 매칭, 추적

6교시
ORB 특징점 검출 을 이용한 실시간 cam 객체 추적 예제

7교시
선형 2x+1 에 대한 선형 회귀 분석

8교시
시험
정리

# ML - 머신러닝

---

## 2025-06-04

---

- 1교시
  - 일경험 프로젝트 - 계획서 작성
- 2교시
  - 일경험 프로젝트 - 계획서 작성
- 3교시
  - 일경험 프로젝트 - 계획서 작성
- 4교시
  - 인공지능
    - 인공지능의 정의
    - 머신러닝과 딥러닝의 차이
    - 인공지능의 역사
- 5교시
  - Jupyter Notebook 소개
    - Jupyter Notebook 설치 및 실행
    - 기본 사용법 (셀, 마크다운, 코드 실행)
  - Colab 소개
    - Colab 환경 설정
    - Colab에서 Jupyter Notebook 사용하기
- 6교시
  - 물고기 분류
- 7교시
  - kNN
    - kNN의 개념
    - kNN의 원리
    - kNN의 장단점
    - kNN의 구현
- 8교시
  - numpy 소개
  - 정리

---

## 2025-06-05

---

- 1교시
  - 복습
  - 넘파이 기초
    - NumPy 배열 생성 및 기본 연산
    - NumPy 배열 인덱싱 및 슬라이싱
- 2교시
  - 넘파이
    - 브로드캐스팅
    - 인덱싱
- 3교시
  - vstack, hstack, concatinate
- 4교시
  - np 데이터의 저장 및 로드.
- 5교시
  - openCV - 추가 설명
- 6교시
  - openCV - hand-pose
- 7교시
  - openCV - open-pose
- 8교시
  - openCV - SAM
  - 정리

---

## 2025-06-09

---

- 1교시
  - 복습
  - data preprocessing
    - 데이터 전처리의 중요성
    - data splitting
      - 훈련 데이터와 테스트 데이터
      - 검증 데이터의 필요성
    - normalization과 standardization
- 2교시
  - KNN regression
    - KNN 회귀의 개념
    - KNN 회귀의 원리
    - KNN 회귀의 장단점
    - KNN 회귀의 구현
- 3교시
  - 선형회귀 Linear regression
    - 선형회귀의 개념
    - 선형회귀의 원리
    - 선형회귀의 장단점
    - 선형회귀의 구현
- 4교시
  - 다항회귀, 다중회귀
- 5교시
  - 분류 - 로지스틱 회귀
- 6교시
  - 확률적 경사 하강법
    - 확률적 경사 하강법의 개념
    - 확률적 경사 하강법의 원리
    - 확률적 경사 하강법의 장단점
    - 확률적 경사 하강법의 구현
- 7교시
  - 미니배치
    - 미니배치의 개념
    - 미니배치의 장단점
    - 미니배치의 구현
- 8교시
  - 머신러닝 정리
  - 정리

---

## 2025-06-10

---

- 1교시
  - 복습
  - wine - logistic regression
    - 해석의 어려움
- 2교시
  - decision Tree
    - 결정 트리의 개념
    - 결정 트리의 원리
    - 결정 트리의 장단점
    - 결정 트리의 구현
- 3교시
  - ensemble - Random Forest, Gradient Boosting, Extra Trees, XGBoost, LightGBM
    - 앙상블의 개념
    - 앙상블의 원리
    - 앙상블의 장단점
    - 앙상블의 구현
- 4교시
  - kaggle
    - kaggle 소개
    - kaggle 사용법
    - kaggle 대회 참여하기- titanic
- 5교시
  - titanic - 간단한 예제
  - [실습] titanic 생존자 예측 결과 올리기
- 6교시
  - pandas 설명
- 7교시
  - pandas 실습
    - Series와 DataFrame
    - 데이터 읽기와 쓰기
    - 데이터 선택과 필터링
    - 데이터 정렬과 그룹화
    - 통계함수
- 8교시
  - 비지도 학습 - kmeans
    - kmeans의 개념
    - kmeans의 원리
    - kmeans의 장단점
    - kmeans의 구현
  - 정리

---

## 2025-06-11

---

- 1교시
  - 복습
  - 비지도 학습 - KMeans
- 2교시
  - 비지도 학습 - PCA
- 3교시
  - 비지도 학습 - 계층적 군집홥
  - dendrogram
- 4교시
  - orange3 설치
  - 그림파일 분석 - covid-19 사진
  - pip install PyQtWebEngine
  - pip install --user --upgrade PyQt5 PyQtWebEngine
- 5교시
  - orange3 로 데이터 분석하기
  - BTS 가사 글 분석 - wordcloud, sentiment analysis
  - 박스 플롯 설명
- 6교시
  - 심장마비 환자 데이터 - PCA 분석
- 7교시
  -
- 8교시
  -
  - 정리

---

## 2025-06-12

---

- 1교시
  - 복습
  - healthcare-3 데이터 분석
- 2교시
  - get_dummy 를 이용한 범주형 데이터 처리
  - 분류 모델의 평가지표 - confusion matrix, accuracy, precision, recall, f1-score
- 3교시
  - MLP 소개 multi-layer perceptron
  - MLP 예제 작성
- 4교시
  - Orange3 로 회귀 분석 - Linear Regression
  - house price 문제
- 5교시
  - [십슬] House Prices - Advanced Regression Techniques
  - 하이퍼파라미터 튜닝 XGBoost
    - GridSearchCV, RandomizedSearchCV
  - 스택킹 앙상블 사용하기
- 6교시
  - 비전 트랜스포머 사용하기 - google/vit
- 7교시
  - wordcloud, network 사용하기
- 8교시
  - 시험
  - 정리

  # DL - 딥러닝

---

## 2025-06-13

---

- 1교시
  - 복습
  - 퍼셉트론과 신경세포
  - 딥러닝의 정의
- 2교시
  - tensorflow 소개
  - keras 소개
  - loss function - cost function
- 3교시
  - 순전파와 역전파
  - optimizer - adam, sgd, rmsprop
- 4교시
  - 정리

---

## 2025-06-16

---

- 1교시
  - 복습
  - dropout
- 2교시
  - checkpoint_cb 을 이용한 모델 저장
  - EarlyStopping 을 이용한 조기 종료
- 3교시
  - CNN - Convolutional Neural Network 설명
    - Convolutional Layer
    - Pooling Layer
- 4교시
  - argmax 함수 이용한 결론 만들기
  - 함수 API 를 이용한 중간 weights 값 분석
- 5교시
  - Conv2D, MaxPooling2D 을 이용한 이미지 분류
- 6교시
  - RNN 설명
  - RNN - IMDB 데이터 분석
  - RNN - one-hot encoding 으로 처리 메모리 초과로 200개로 낮춤
- 7교시
  - RNN - embedding 으로 처리
- 8교시
  - LSTM 설명 - Long Short Term Memory
    - LSTM의 구조 - forget gate, input gate, output gate
    - LSTM의 작동 원리 - 셀 상태와 은닉 상태
  - 정리

---

## 2025-06-17

---

- 1교시
  - 복습
  - LSTM 실습
- 2교시
  - custom LSTM 구현
    - LSTMCell 클래스 작성
    - LSTM 모델 작성
    - LSTM 모델 학습 및 평가
  - Bi-directional LSTM 설명
- 3교시
  - 분산 처리 모델 실습(zmq 사용)
    - zmq_server.py 작성 -> tensorflow 모델을 서버로 실행
    - zmq_client.py 작성
    - zmq_image_server.py 작성
    - zmq_image_client.py 작성
- 4교시
  - 분산 처리 모델 실습(zmq 사용)
    - zmq_server.cpp 작성
    - zmq_client.cpp 작성
- 5교시
  - GRU - Gated Recurrent Unit
    - GRU의 구조 - reset gate, update gate
    - GRU의 작동 원리 - 셀 상태와 은닉 상태
    - 실습
- 6교시
  - rnn 에서의 dropout 적용 방법 - GRU
  - rnn 두 개의 층 적용 방법
- 7교시
  - OpenCV 에서 tensorflow 사용법
  - 숫자 인식 모델 훈련
- 8교시
  - zmq + openCV + tensorflow 예제
  - 정리

---

## 2025-06-18

---

- 1교시
  - 복습
  - OpenCV classification - googlenet
- 2교시
  - OpenCV ssd classification - ssd face detection
- 3교시
  - Yolo 설명
    - YOLO의 구조 - Backbone, Neck, Head
    - YOLO의 작동 원리 - Anchor Box, Non-Maximum Suppression
- 4교시
  - YOLOv5 실습
    - python3 detect.py --source 0
    - coco 데이터넷 80개 클래스 설명
- 5교시
  - YOLOv5 커스터마이징
    - 커스터마이징을 위한 데이터 준비
      - 데이터셋 구성 - 이미지와 라벨 파일
      - 라벨링 도구 소개 - LabelImg, Roboflow
    - 커스터마이징을 위한 환경 설정
      - YOLOv5 설치 및 의존성 설치
      - 커스터마이징을 위한 config 파일 수정
  - [모델 학습](https://github.com/ultralytics/yolov5/wiki/Train-Custom-Data)
- 6교시
  - DQN의 하이퍼파라미터 튜닝
- 7교시
  - DQN의 확장
    - Double DQN
    - Dueling DQN
- 8교시
  - DQN의 응용
    - Atari 게임에서의 DQN 적용
    - DQN의 한계와 개선 방안
  - 정리

---

## 2025-06-19

---

- 1교시
  - 복습
  - 프로젝트
- 2교시
  - 프로젝트
- 3교시
  - 프로젝트
- 4교시
  - 프로젝트
- 5교시
  - 생성형 모델 AE - Autoencoder
    - AE의 구조 - Encoder, Decoder
    - AE의 작동 원리 - 재구성 손실
- 6교시
  - VAE - Variational Autoencoder
    - VAE의 구조 - Encoder, Decoder, Latent Space
    - VAE의 작동 원리 - 재구성 손실과 KL 발산
- 7교시
  - tensorboardX 설치 및 사용법
  - tensorboardX 를 이용한 모델 시각화
- 8교시
  - 정리

---

## 2025-06-20

---

- 1교시
  - 복습
  - 인공지능 적용 실습 - 바이브 코딩
- 2교시
  - VsCode 세팅
- 3교시
  - 자동완성 가이드 설정
- 4교시
  - 커밋메세지 가이드 설정
- 5교시
  - copilot 사용법
- 6교시
  - agent 사용법
- 7교시
  - mcp 사용법
- 8교시
  - agent + mcp 사용법
  - 정리