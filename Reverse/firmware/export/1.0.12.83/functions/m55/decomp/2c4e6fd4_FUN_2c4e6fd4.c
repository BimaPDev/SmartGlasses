/* FUN_2c4e6fd4 @ 0x2c4e6fd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e6fd4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c4e7090;
  uVar1 = FUN_2c66d418(*param_2,auStack_20,10,0);
  iVar2 = FUN_2c66d418(param_2[1],auStack_20,10);
  FUN_2c4e94fc();
  if (param_1 == 3) {
    uVar4 = FUN_2c66d418(param_2[2],auStack_20,10);
    uVar3 = uVar4 >> 0x1f;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  if ((-1 < iVar2) && (uVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x8c,_LAB_2c4e7098,_LAB_2c4e709c,_LAB_2c4e7094,uVar1,iVar2,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x89,_LAB_2c4e7098,_LAB_2c4e709c,_LAB_2c4e70a8);
}

