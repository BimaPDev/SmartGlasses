/* FUN_2c5dacc4 @ 0x2c5dacc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dacc4(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_2c5da7cc(param_1,1);
  if (iVar1 != 0) {
    func_0x2c5d8bc4(iVar1,0);
  }
  uVar3 = FUN_2c5c561c();
  iVar1 = ((int)((ulonglong)uVar3 >> 0x20) - *(int *)(param_1 + 0xc)) -
          (uint)((uint)uVar3 < *(uint *)(param_1 + 8));
  bVar2 = _LAB_2c5dad14 < (uint)uVar3 - *(uint *)(param_1 + 8);
  if ((int)(-(uint)bVar2 - iVar1) < 0 == (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar2))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5dad20,0x14d,_LAB_2c5dad1c,_LAB_2c5dad18);
}

