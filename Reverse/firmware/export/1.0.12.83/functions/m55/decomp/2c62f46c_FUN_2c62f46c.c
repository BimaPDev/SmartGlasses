/* FUN_2c62f46c @ 0x2c62f46c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62f46c(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar2 = _LAB_2c62f4b8;
  piVar1 = _LAB_2c62f4b0;
  if (*_LAB_2c62f4b0 == 0) {
    *(undefined1 *)(param_2 + 0xe) = 0;
    uVar4 = *puVar2;
  }
  else {
    uVar3 = *_LAB_2c62f4b0 - 1;
    *(undefined1 *)(param_2 + 0xe) = 1;
    if (6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c62f4c4,0xca,_LAB_2c62f4c0,_LAB_2c62f4bc);
    }
    uVar4 = *(undefined4 *)(_LAB_2c62f4b4 + uVar3 * 4);
    *_LAB_2c62f4b8 = uVar4;
  }
  *(undefined4 *)(param_2 + 4) = uVar4;
  *piVar1 = 0;
  return;
}

