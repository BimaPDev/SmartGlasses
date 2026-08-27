/* FUN_2c522c44 @ 0x2c522c44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c522c44(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iStack_38;
  undefined1 auStack_34 [32];
  int iStack_14;
  
  iStack_14 = *_LAB_2c522cd8;
  iStack_38 = 0;
  puVar1 = (undefined1 *)func_0x2c5ef8e8(param_2,&iStack_38,param_2,0);
  if (iStack_38 == 6) {
    FUN_2c62c3b0(auStack_34,0x20);
    FUN_2c66b450(auStack_34,0x1f,_LAB_2c522cdc,*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],
                 puVar1[5]);
    uVar2 = FUN_2c66c4ec(auStack_34);
    FUN_2c52270c(param_1 + 0x30,0,*(undefined4 *)(param_1 + 0x34),auStack_34,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c522ce8,0x136,_LAB_2c522ce4,_LAB_2c522ce0,*(undefined4 *)(param_1 + 0x30));
  }
  if (*_LAB_2c522cd8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

