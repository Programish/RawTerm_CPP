/********************-CLASS-**********************/

class menu {
 private:
 protected:
 public:
  void display_menu() {}
};
/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class colour : public menu {
 private:
 protected:
 public:
  void change_clor_scheme(int i) {
    switch (i) {
      case 0:
#undef PINK
#define BLUE 1

      case 1:
#undef BLUE
#define PINK 1
    }
  }
};
/******************-FUNCTIONS-*********************/

/*********************-END-************************/

void menu_call(void);
/********************-CLASS-**********************/

class device : public menu {
 private:
  ofstream outf;

 protected:
 public:
  /*
  switch_dev need to be called from the menu upon any given choice  ****TODO****
  */
  void switch_dev(int i) {
    switch (i) {
      case 0:
        if (outf) outf.close();
        outf.open("/dev/ttyUSB0", ios::binary | ios::out);

      case 1:
        if (outf) outf.close();
        outf.open("/dev/ttyUSB1", ios::binary | ios::out);

      case 2:
        if (outf) outf.close();
        outf.open("/dev/ttyACM0", ios::binary | ios::out);

      case 3:
        if (outf) outf.close();
        outf.open("/dev/ttyACM1", ios::binary | ios::out);
    }
  }

  // TO be called from menu_call           ****TODO*****
  void display_menu() { cout << "device called display_menu"; }

  void write(char *str) {
    outf << str << endl;
    cout << "hello";
  }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class ip_file : public device {
 private:
 protected:
 public:
  void file_input();

  void display_menu() { cout << "device called display_menu"; }
};
/******************-FUNCTIONS-*********************/
void ip_file::file_input() {
  char str[30];

  while (1) {
    cin.getline(str, 30, '\n');

    cout << "affected";
    if (strcmp(str, "__MENU"))
      write(str);
    else
      menu_call();
  }
}
/*********************-END-************************/

#if 0
/********************-CLASS-**********************/

class RENAME
{
private:

protected:

public:

};
/******************-FUNCTIONS-*********************/

/*********************-END-************************/
/********************-CLASS-**********************/

class RENAME
{
private:

protected:

public:

};
/******************-FUNCTIONS-*********************/

/*********************-END-************************/
/********************-CLASS-**********************/

class RENAME
{
private:

protected:

public:

};
/******************-FUNCTIONS-*********************/

/*********************-END-************************/
#endif
