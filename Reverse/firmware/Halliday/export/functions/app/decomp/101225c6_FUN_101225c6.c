/* FUN_101225c6 @ 0x101225c6 */

undefined4 FUN_101225c6(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if ((((param_1 == (int *)0x0) || (pcVar3 = (char *)*param_1, pcVar3 == (char *)0x0)) ||
      (*pcVar3 == '\0')) ||
     ((*(short *)(pcVar3 + 6) != (short)param_1[1] ||
      (uVar1 = FUN_10086280(pcVar3[1]), (uVar1 & 1) != 0)))) {
    uVar4 = 9;
    *param_2 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*param_1 + 0x14);
    *param_2 = *param_1;
    iVar2 = FUN_101242c2(uVar4);
    uVar4 = 0;
    if (iVar2 == 0) {
      uVar4 = 0xf;
    }
  }
  return uVar4;
}

