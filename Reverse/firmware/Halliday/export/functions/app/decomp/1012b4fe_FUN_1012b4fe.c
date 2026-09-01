/* FUN_1012b4fe @ 0x1012b4fe */

undefined1 FUN_1012b4fe(char *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x23) {
    uVar2 = 0;
    goto LAB_1012b51a;
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_1 = '\x01';
  }
  else {
    uVar2 = 0;
    if (cVar1 == '\x01') {
      *param_1 = '\0';
      goto LAB_1012b51a;
    }
    if (cVar1 != '\x02') goto LAB_1012b51a;
    *param_1 = '\0';
  }
  uVar2 = 1;
LAB_1012b51a:
  if ((*param_1 == '\x01') && (uVar2 = 1, param_2 == 0x20)) {
    *param_1 = '\x02';
  }
  return uVar2;
}

