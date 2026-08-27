/* FUN_2c4a0b00 @ 0x2c4a0b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 auStack_6c [16];
  undefined4 uStack_2c;
  
  uVar3 = _LAB_2c4a0c80;
  uVar2 = _LAB_2c4a0c70;
  uVar1 = _LAB_2c4a0c64;
  uStack_2c = *_LAB_2c4a0c60;
  iVar4 = FUN_2c4a09bc(0x560,auStack_6c,param_3,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4e4,uVar2,uVar1,uVar3,0,0,auStack_6c[0]);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4e1,_LAB_2c4a0c70,_LAB_2c4a0c64,_LAB_2c4a0c74);
}

