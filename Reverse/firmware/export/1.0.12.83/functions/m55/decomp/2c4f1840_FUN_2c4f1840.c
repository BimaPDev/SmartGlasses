/* FUN_2c4f1840 @ 0x2c4f1840 */

void FUN_2c4f1840(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 code *param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_34 [4];
  
  local_34[2] = *DAT_2c4f1908;
  uVar4 = param_5 - 1;
  uVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c) - 8;
  if (uVar4 < uVar3) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_2c672b18(uVar4 / uVar3 - 1);
    uVar3 = (uVar4 + (iVar1 + 2) * -4) / uVar3;
  }
  while( true ) {
    uVar5 = (*param_6)(param_7,param_4);
    if (((int)uVar5 != 0) || (uVar3 == 0)) goto LAB_2c4f18ec;
    iVar1 = *(int *)(param_1 + 0x68);
    uVar4 = (2 - (uVar3 & 1)) * 4;
    if ((*(uint *)(iVar1 + 0x20) <= param_4) || (*(uint *)(iVar1 + 0x1c) < uVar4)) break;
    uVar5 = FUN_2c4f0eb4(param_1,param_2,param_3,uVar4,param_4,0,local_34,uVar4);
    if ((int)uVar5 != 0) goto LAB_2c4f18ec;
    uVar2 = ~uVar3;
    uVar4 = 0;
    while (uVar4 < (uVar2 & 1)) {
      uVar5 = (*param_6)(param_7,local_34[0]);
      uVar4 = 1;
      if ((int)uVar5 != 0) goto LAB_2c4f18ec;
    }
    uVar3 = uVar3 + ((uVar3 & 1) - 2);
    param_4 = local_34[uVar2 & 1];
  }
  uVar5 = CONCAT44(iVar1,0xffffffac);
LAB_2c4f18ec:
  if ((*DAT_2c4f1908 ^ local_34[2]) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),*DAT_2c4f1908 ^ local_34[2],0);
}

