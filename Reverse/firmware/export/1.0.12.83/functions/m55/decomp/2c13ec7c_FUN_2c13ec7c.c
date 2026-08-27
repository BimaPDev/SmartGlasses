/* FUN_2c13ec7c @ 0x2c13ec7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13ec7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  longlong lVar4;
  
  FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed64,param_3,param_4,param_4);
  FUN_2c135420(0xc,0);
  FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed6c);
  iVar3 = _DAT_2c13ed70;
  FUN_2c135420(0xd,_DAT_2c13ed74);
  func_0x2c144efc(*(undefined4 *)(iVar3 + 0x14));
  if (*(int *)(iVar3 + 0x18) != *(int *)(iVar3 + 0x14)) {
    FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed78);
    func_0x2c144efc(*(undefined4 *)(iVar3 + 0x18));
  }
  FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed7c);
  FUN_2c135420(0xd,_DAT_2c13ed80,0xb);
  for (iVar2 = *(int *)(iVar3 + 0x24); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    func_0x2c144efc(iVar2);
  }
  FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed84);
  FUN_2c135420(0xd,_DAT_2c13ed88,0xb);
  for (iVar2 = *(int *)(iVar3 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
    func_0x2c144efc(iVar2);
  }
  FUN_2c135420(0xe,0);
  FUN_2c135420(0xf,0);
  FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed8c);
  for (iVar2 = *(int *)(iVar3 + 0x30); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
    func_0x2c144efc(iVar2);
  }
  FUN_2c135940(_DAT_2c13ed68,_DAT_2c13ed90);
  for (iVar3 = *(int *)(iVar3 + 0x34); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    func_0x2c144efc(iVar3);
  }
  func_0x2c145718();
  FUN_2c135940(_DAT_2c13ed98,_DAT_2c13ed94);
  func_0x2c1455c0();
  uVar1 = *DAT_2c135984;
  if (*DAT_2c135980 == '\0') {
    lVar4 = (ulonglong)_DAT_2c13ed94 << 0x20;
  }
  else {
    lVar4 = FUN_2c13583c(_DAT_2c13ed98,_DAT_2c13ed94,&stack0xfffffff8,*DAT_2c135980,&stack0xfffffff8
                         ,uVar1,unaff_lr);
  }
  if ((*DAT_2c135984 ^ uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),*DAT_2c135984 ^ uVar1,0);
  }
  return;
}

