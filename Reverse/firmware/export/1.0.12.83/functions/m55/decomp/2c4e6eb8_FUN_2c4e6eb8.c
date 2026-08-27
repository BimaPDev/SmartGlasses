/* FUN_2c4e6eb8 @ 0x2c4e6eb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e6eb8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c4e6f4c;
  iVar1 = FUN_2c66d418(*param_2,auStack_20,10,0);
  FUN_2c4e94fc();
  if ((iVar1 == 0x2b) || (iVar1 == 0x40)) {
    uVar2 = FUN_2c66d418(param_2[1],auStack_20,0x10);
  }
  else {
    uVar2 = FUN_2c66d418(param_2[1],auStack_20,10);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x6c,_LAB_2c4e6f54,_LAB_2c4e6f58,_LAB_2c4e6f50,iVar1,uVar2,*param_2,param_2[1],param_4);
}

