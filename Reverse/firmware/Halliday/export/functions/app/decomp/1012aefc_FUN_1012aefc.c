/* FUN_1012aefc @ 0x1012aefc */

void FUN_1012aefc(char *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  
  if (*param_2 == '\x02') {
    cVar1 = FUN_100938a8(param_3);
    *param_2 = cVar1;
  }
  if (*param_1 == '\0') {
    if (*param_2 == '\x01') {
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x01';
    }
    *param_1 = cVar1;
  }
  return;
}

