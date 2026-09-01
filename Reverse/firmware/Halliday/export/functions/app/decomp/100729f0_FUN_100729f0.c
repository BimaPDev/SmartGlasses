/* FUN_100729f0 @ 0x100729f0 */

undefined4 FUN_100729f0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_10072a44;
  iVar4 = 0x80;
  iVar5 = param_2;
  do {
    if (param_3 < 1) {
      return 1;
    }
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    FUN_10073a50(*param_1,param_2,param_1[6] + iVar5,0,piVar1,iVar4);
    param_2 = iVar4 >> 2;
    piVar3 = DAT_10072a44;
    for (iVar2 = 0; param_2 != iVar2; iVar2 = iVar2 + 1) {
      if (*piVar3 != -1) {
        return 0;
      }
      piVar3 = piVar3 + 1;
    }
    param_3 = param_3 - iVar4;
    iVar5 = iVar5 + iVar4;
  } while( true );
}

