/* FUN_2c4e9290 @ 0x2c4e9290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e9290(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [36];
  uint uStack_14;
  
  uStack_14 = *_LAB_2c4e9334;
  if (param_1 == (undefined8 *)0x0) {
    if (*_LAB_2c4e9338 == '\0') {
      FUN_2c4e9170(auStack_38);
      uVar3 = FUN_2c6697dc(auStack_38);
    }
    else {
      FUN_2c673c88();
      uVar2 = _LAB_2c4e933c;
      iVar1 = func_0x2c674808();
      uVar2 = (uint)((ulonglong)uVar2 * (ulonglong)(uint)(iVar1 - *_LAB_2c4e9340) >> 0x26);
      uVar3 = CONCAT44(_LAB_2c4e9344[1] + (uint)CARRY4(uVar2,*_LAB_2c4e9344),uVar2 + *_LAB_2c4e9344)
      ;
    }
  }
  else {
    FUN_2c674268(auStack_38,0,0x24,0);
    iVar1 = FUN_2c668f44(param_1,auStack_38);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x94,_LAB_2c4e9350,_LAB_2c4e934c,_LAB_2c4e9348);
    }
    uStack_40 = 0;
    uStack_3c = 0;
    func_0x2c4eff20(auStack_38,&uStack_40);
    func_0x2c674218(&uStack_40);
    uVar3 = *param_1;
  }
  if ((*_LAB_2c4e9334 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),*_LAB_2c4e9334 ^ uStack_14,0);
}

