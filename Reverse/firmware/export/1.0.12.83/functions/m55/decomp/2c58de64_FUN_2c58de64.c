/* FUN_2c58de64 @ 0x2c58de64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58de64(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_30 [28];
  uint uStack_14;
  
  uStack_14 = *_LAB_2c58df14;
  switch(param_2) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    break;
  default:
    FUN_2c55792c(auStack_30,param_2,param_3,0);
    uVar1 = FUN_2c58c9c0(auStack_30,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c58df20,0xde,_LAB_2c58df18,_LAB_2c58df1c,_LAB_2c58df18,uVar1);
  case 5:
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    break;
  case 6:
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    break;
  case 7:
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    break;
  case 8:
    uVar1 = *(undefined4 *)(param_1 + 0x68);
  }
  if ((*_LAB_2c58df14 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,param_2,*_LAB_2c58df14 ^ uStack_14,0);
}

