/* FUN_14036528 @ 0x14036528 */

int FUN_14036528(char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  code *pcVar6;
  
  piVar3 = DAT_1403662c;
  FUN_14026abc(*DAT_14036628);
  iVar1 = param_2;
  piVar2 = DAT_14036650;
  if (0x400 < (uint)(*piVar3 + param_2)) {
    FUN_1402a6e8(4,0xab,DAT_14036634,DAT_14036638,DAT_14036630,*piVar3,param_2,4);
    iVar1 = 0x400 - *piVar3;
    piVar2 = DAT_14036650;
  }
  if (iVar1 == 0) {
    DAT_14036650 = piVar2;
    return param_2;
  }
  DAT_14036650 = piVar2;
  FUN_140e5278(*piVar2 + *piVar3,param_1,iVar1);
  FUN_1402a6e8(4,0xb1,DAT_14036634,DAT_14036638,DAT_1403663c);
  FUN_1402a9fc(DAT_14036640,1,iVar1,*piVar3 + *piVar2);
  if ((code *)*DAT_14036644 == (code *)0x0) {
LAB_1403660c:
    pcVar6 = (code *)*DAT_1403664c;
    if (((pcVar6 == (code *)0x0) || (*param_1 != '\x04')) || (param_1[1] != '\x0e'))
    goto LAB_140365b6;
    cVar5 = param_1[4];
  }
  else {
    if ((*param_1 != '\x04') || (param_1[1] != '\x0e')) goto LAB_140365b6;
    cVar5 = param_1[4];
    if ((cVar5 == '\x1f') && (param_1[5] == ' ')) {
      (*(code *)*DAT_14036644)(param_1[6],*(undefined2 *)(param_1 + 7));
      goto LAB_1403660c;
    }
    pcVar6 = (code *)*DAT_1403664c;
    if (pcVar6 == (code *)0x0) goto LAB_140365b6;
  }
  if ((cVar5 == -0x79) && (param_1[5] == -4)) {
    (*pcVar6)(param_1[6],*(undefined2 *)(param_1 + 7),*(undefined2 *)(param_1 + 9),
              *(undefined2 *)(param_1 + 0xb));
  }
LAB_140365b6:
  puVar4 = DAT_14036648;
  *piVar3 = iVar1 + *piVar3;
  *puVar4 = 1;
  return param_2;
}

