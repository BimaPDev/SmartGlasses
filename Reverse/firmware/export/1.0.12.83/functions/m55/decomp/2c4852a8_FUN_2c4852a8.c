/* FUN_2c4852a8 @ 0x2c4852a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4852a8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined8 uVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4853a0;
  iVar1 = func_0x2c48a85c();
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_2c66b4b8(&uStack_2c,_LAB_2c4853a4,param_1);
  uStack_3c = _LAB_2c4853a8;
  uStack_18 = 0;
  uStack_44 = _LAB_2c4853a8;
  uStack_40 = _LAB_2c4853a8;
  uStack_38 = _LAB_2c4853b0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_34 = _LAB_2c4853b4;
  FUN_2c66b4b8(&uStack_20,_LAB_2c4853ac,0x1003);
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c4853b8,_LAB_2c4853bc);
  FUN_2c48e5b4(uVar2,_LAB_2c4853c0,&uStack_20);
  uVar3 = func_0x2c495ddc();
  FUN_2c48e5b4(uVar2,_LAB_2c4853c4,uVar3);
  FUN_2c48e5b4(uVar2,_LAB_2c4853c8,&uStack_2c);
  uVar4 = VectorSignedToFloat((uint)(iVar1 != 0),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar2,_LAB_2c4853cc);
  FUN_2c48e518((int)uRam2c485398,uVar2,_LAB_2c4853d0);
  FUN_2c48e5b4(uVar2,_LAB_2c4853d4,_LAB_2c4853bc);
  FUN_2c48e518((int)uRam2c485398,uVar2,_LAB_2c4853d8);
  FUN_2c48e518((int)uRam2c485398,uVar2,_LAB_2c4853dc);
  FUN_2c48e518((int)uRam2c485398,uVar2,_LAB_2c4853e0);
  uStack_30 = uVar2;
  FUN_2c4861f4(&uStack_44);
  if (*_LAB_2c4853a0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

