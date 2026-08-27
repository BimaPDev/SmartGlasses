/* FUN_2c4cca08 @ 0x2c4cca08 */

void FUN_2c4cca08(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  
  if ((param_3 & DAT_2c4cca7c) == 0) {
    iVar1 = *(int *)(param_1 + param_5 * 4);
    FUN_2c4d0e54(iVar1,iVar1 + 0xa8,*(undefined4 *)(iVar1 + 0x94),iVar1 + 0x98,
                 *(undefined4 *)(iVar1 + 0xc0),param_2,*(undefined4 *)(iVar1 + 0xb8),param_5);
  }
  iVar1 = *(int *)(param_1 + param_5 * 4);
  FUN_2c4ce9e4(*(int *)(iVar1 + 0xc0) + 0x300,iVar1 + 0xa8,*(undefined4 *)(iVar1 + 0x94),param_2,
               *(undefined4 *)(iVar1 + 0xb8),*(undefined1 *)(iVar1 + 0xb4),(param_4 & 0xff) >> 7,
               param_3);
  return;
}

