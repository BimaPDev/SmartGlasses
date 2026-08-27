/* FUN_2c48c20c @ 0x2c48c20c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48c20c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _LAB_2c48c288;
  uVar3 = _LAB_2c48c284;
  uVar2 = _LAB_2c48c280;
  if (param_1 != 0) {
    *_LAB_2c48c278 = 0;
    if ((code *)*_LAB_2c48c27c != (code *)0x0) {
      (*(code *)*_LAB_2c48c27c)(1);
      FUN_2c482bb8(1);
    }
    return 0;
  }
  sVar1 = *_LAB_2c48c278;
  *_LAB_2c48c278 = sVar1 + 1;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x246,uVar4,uVar3,uVar2,sVar1 + 1);
}

