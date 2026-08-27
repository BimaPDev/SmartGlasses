/* FUN_2c497824 @ 0x2c497824 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c497824(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_67;
  undefined4 local_63;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_54;
  undefined1 auStack_50 [36];
  undefined4 local_2c;
  
  local_2c = *_LAB_2c497988;
  local_54 = 0;
  FUN_2c674268(auStack_50,0,0x24);
  if (param_1 == 0) {
    FUN_2c4c01d0(0x21);
  }
  else {
    FUN_2c4c01d0(0x4f);
  }
  uVar3 = _LAB_2c4979a8;
  uVar2 = _LAB_2c497994;
  uVar1 = _LAB_2c497990;
  local_78 = *_LAB_2c49798c;
  uStack_74 = _LAB_2c49798c[1];
  uStack_70 = _LAB_2c49798c[2];
  uStack_6c = _LAB_2c49798c[3];
  FUN_2c6741b8(&local_78,&local_68,0x11);
  *param_2 = local_67;
  param_2[1] = local_63;
  param_2[2] = local_5f;
  param_2[3] = local_5b;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x188,uVar2,uVar1,uVar3,&local_68 + -(int)&local_68,local_68);
}

