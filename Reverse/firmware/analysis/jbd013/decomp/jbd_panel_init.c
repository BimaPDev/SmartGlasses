/* FUN_2c49807c @ 0x2c49807c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49807c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  int iStack_1c;
  
  iVar1 = _LAB_2c4981f0;
  iStack_1c = *_LAB_2c4981ec;
  FUN_2c4975bc(0x66,param_2,param_3,0);
  FUN_2c4975bc(0x99);
  FUN_2c497510(0x32);
  FUN_2c4975bc(6);
  FUN_2c497510(1);
  FUN_2c4975bc(0xa9);
  FUN_2c497510(1);
  if (*(int *)(iVar1 + 0x24) == 0) {
    uStack_21 = 0x10;
    FUN_2c497644(1,&uStack_21);
  }
  else {
    uStack_21 = 0x38;
    FUN_2c497644(1,&uStack_21);
  }
  FUN_2c674268(_LAB_2c4981f4,0,0x25800);
  FUN_2c498000(0,0,_LAB_2c4981f4,0x25800);
  uStack_20 = 0;
  uStack_1f = 0;
  FUN_2c497644(0xc0,&uStack_20,2);
  FUN_2c4975bc(0x97);
  FUN_2c497510(1);
  uStack_20 = 0;
  uStack_1f = 0x14;
  FUN_2c497644(0xc0,&uStack_20,2);
  FUN_2c4975bc(0x97);
  FUN_2c497510(1);
  uStack_1f = 0;
  uStack_20 = 0x18;
  FUN_2c497644(0xc0,&uStack_20,2);
  FUN_2c4975bc(0x97);
  FUN_2c497510(1);
  uStack_20 = 0x18;
  uStack_1f = 0x14;
  FUN_2c497644(0xc0,&uStack_20,2);
  FUN_2c4975bc(0x97);
  FUN_2c497510(1);
  uStack_20 = 0xc;
  uStack_1f = 10;
  FUN_2c497644(0xc0,&uStack_20,2);
  FUN_2c4975bc(0x97);
  FUN_2c497510(1);
  uStack_21 = 0x3f;
  FUN_2c497644(0x46,&uStack_21,1);
  FUN_2c497510(1);
  if (*(int *)(iVar1 + 0x24) == 0) {
    uStack_21 = 4;
  }
  else {
    uStack_21 = 5;
  }
  FUN_2c497644(0x31,&uStack_21,1);
  if (*_LAB_2c4981ec == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

