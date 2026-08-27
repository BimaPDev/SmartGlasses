/* FUN_2c4f17bc @ 0x2c4f17bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f17bc(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  iVar1 = *param_1;
  uStack_14 = *_LAB_2c4f183c;
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x68) + 0x1c);
  if ((*param_3 < *(uint *)(*(int *)(iVar1 + 0x68) + 0x20)) && (param_3[1] + 8 <= uVar2)) {
    uVar3 = FUN_2c4f0eb4(iVar1,iVar1 + 0x10,iVar1,uVar2,*param_3,param_3[1],&iStack_1c,8);
    iVar1 = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = (uint)uVar3;
    if (((uVar2 == 0) && (param_1[1] != iStack_1c)) &&
       (uVar2 = (uint)(iStack_18 != param_1[2] && iStack_1c != param_1[2]), iVar1 = iStack_18,
       param_1[1] == iStack_18)) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffac;
    iVar1 = param_2;
  }
  if ((*_LAB_2c4f183c ^ uStack_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar2,iVar1,*_LAB_2c4f183c ^ uStack_14,0);
  }
  return;
}

