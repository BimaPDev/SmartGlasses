/* FUN_100ae620 @ 0x100ae620 */

int FUN_100ae620(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar2 = DAT_100ae6cc;
  piVar1 = DAT_100ae6c8;
  param_2 = param_3 * param_2;
  iVar4 = param_2;
  puVar5 = param_4;
  if (*DAT_100ae6c8 < param_2) {
    while (piVar2 = DAT_100ae6cc, *piVar1 < iVar4) {
      FUN_1011ea40(param_1,*DAT_100ae6cc + DAT_100ae6d0,*piVar1,DAT_100ae6d0,puVar5);
      iVar3 = *piVar1;
      *piVar2 = 0;
      param_1 = param_1 + iVar3;
      iVar4 = iVar4 - iVar3;
      iVar3 = (*(code *)*param_4)(DAT_100ae6d0,1,0x200,param_4);
      piVar2 = DAT_100ae6d8;
      if (iVar3 < 1) {
        *piVar1 = 0;
        return param_3 - iVar4;
      }
      *piVar1 = iVar3;
      *piVar2 = iVar3;
      piVar2 = DAT_100ae6cc;
      if (iVar4 <= iVar3) {
        FUN_1011ea40(param_1,*DAT_100ae6cc + DAT_100ae6d0,iVar4,DAT_100ae6d0,puVar5);
        iVar3 = *piVar1;
        *piVar2 = iVar4;
        *piVar1 = iVar3 - iVar4;
        iVar4 = 0;
      }
    }
  }
  else {
    FUN_1011ea40(param_1,DAT_100ae6d0 + *DAT_100ae6cc,param_2,*DAT_100ae6cc,param_4);
    *piVar1 = *piVar1 - param_2;
    *piVar2 = *piVar2 + param_2;
  }
  *DAT_100ae6d4 = *DAT_100ae6d4 + param_2;
  return param_3;
}

