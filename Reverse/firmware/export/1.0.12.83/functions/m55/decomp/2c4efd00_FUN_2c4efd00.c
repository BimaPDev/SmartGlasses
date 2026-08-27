/* FUN_2c4efd00 @ 0x2c4efd00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4efd00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 auStack_90 [3];
  undefined4 uStack_78;
  undefined1 auStack_74 [96];
  undefined4 uStack_14;
  
  uStack_14 = *_LAB_2c4efe40;
  uStack_78 = 0;
  FUN_2c674268(auStack_74,0,0x60,0);
  iVar1 = FUN_2c4e9354();
  auStack_90[0] = (**(code **)(iVar1 + 0x30))(0);
  iVar1 = FUN_2c4e9354();
  uVar2 = (**(code **)(iVar1 + 0x2c))(auStack_90);
  thunk_FUN_2c66bb40(&uStack_78,100,_LAB_2c4efe44,uVar2);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x17,_LAB_2c4efe50,_LAB_2c4efe4c,_LAB_2c4efe48,&uStack_78);
}

