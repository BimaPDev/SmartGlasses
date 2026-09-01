/* FUN_10069b0c @ 0x10069b0c */

undefined4 FUN_10069b0c(int *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = DAT_10069ba4;
  iVar3 = *param_1;
  uVar5 = *(uint *)(iVar3 + 0x10);
  if (uVar5 <= param_3) {
    param_3 = param_3 - uVar5;
  }
  if (uVar5 < param_4 + param_3) {
    iVar8 = (param_4 + param_3) - uVar5;
    param_4 = param_4 - iVar8;
  }
  else {
    iVar8 = 0;
  }
  while( true ) {
    iVar3 = *(int *)(iVar3 + 0xc);
    uVar4 = param_4 + 0xffff + param_3 + iVar3 & uVar1;
    uVar7 = param_3 + iVar3 + 0xffff & uVar1;
    uVar6 = uVar5 + iVar3;
    if (uVar4 <= uVar5 + iVar3) {
      uVar6 = uVar4;
    }
    if ((param_3 == 0) && (0 < (int)(uVar7 - iVar3))) {
      pcVar2 = *(code **)(*(int *)(*param_2 + 8) + 8);
      (*pcVar2)(*param_2,pcVar2,iVar3,0,uVar7 - iVar3,0);
    }
    if (0 < (int)(uVar6 - uVar7)) {
      pcVar2 = *(code **)(*(int *)(*param_2 + 8) + 8);
      (*pcVar2)(*param_2,pcVar2,uVar7,0,uVar6 - uVar7,0);
    }
    if (iVar8 < 1) break;
    param_3 = 0;
    iVar3 = *param_1;
    uVar5 = *(uint *)(iVar3 + 0x10);
    param_4 = iVar8;
    iVar8 = 0;
  }
  return 0;
}

