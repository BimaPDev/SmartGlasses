/* FUN_2c4fefa4 @ 0x2c4fefa4 */

bool FUN_2c4fefa4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x44);
  iVar1 = FUN_2c607440();
  if (*(char *)(param_1 + 0x115) != '\0') {
    iVar1 = (int)(short)((short)iVar1 -
                        ((short)*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) +
                        *(short *)(param_1 + 0x118)));
  }
  return iVar1 + *(int *)(param_1 + 0xc0) < *(int *)(iVar2 + 0x20);
}

