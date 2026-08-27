/* FUN_2c545528 @ 0x2c545528 */

undefined4 FUN_2c545528(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(short *)(param_2 + 0x26) == 4) {
    iVar1 = *(int *)(param_1 + 4);
    FUN_2c54800c(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x114) + 0x10),param_3,
                 *(int *)(iVar1 + 0x114),param_4);
    func_0x2c547648(iVar1,param_2);
    return 0;
  }
  return 0xffffffff;
}

