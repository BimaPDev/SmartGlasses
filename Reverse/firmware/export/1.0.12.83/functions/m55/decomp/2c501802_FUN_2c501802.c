/* FUN_2c501802 @ 0x2c501802 */

void FUN_2c501802(undefined4 *param_1)

{
  char cVar1;
  
  if ((int)((uint)*(byte *)(param_1[2] + 0x14) << 0x1f) < 0) {
LAB_2c501828:
    FUN_2c62be74();
    FUN_2c62be4c(param_1[2]);
    cVar1 = *(char *)(param_1 + 3) + '\x01';
    *(char *)(param_1 + 3) = cVar1;
    if (*(char *)((int)param_1 + 0xe) != '\0') goto LAB_2c50181e;
LAB_2c501842:
    if (cVar1 == '\x02') goto LAB_2c501846;
  }
  else {
    if (*(char *)(param_1 + 3) == '\0') goto LAB_2c501828;
    cVar1 = *(char *)(param_1 + 3) + '\x01';
    *(char *)(param_1 + 3) = cVar1;
    if (*(char *)((int)param_1 + 0xe) == '\0') goto LAB_2c501842;
LAB_2c50181e:
    if (cVar1 == '\x03') {
LAB_2c501846:
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      goto LAB_2c50184a;
    }
  }
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    return;
  }
LAB_2c50184a:
  FUN_2c606abc(*param_1,1);
  FUN_2c606abc(param_1[1],1);
  FUN_2c62be40(param_1[2]);
  return;
}

