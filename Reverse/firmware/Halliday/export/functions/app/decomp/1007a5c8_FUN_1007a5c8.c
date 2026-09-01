/* FUN_1007a5c8 @ 0x1007a5c8 */

void FUN_1007a5c8(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_1007a600;
  if (*(byte *)(DAT_1007a600 + 0x11) == param_2) {
    if (*(char *)(DAT_1007a600 + 0x13) != '\x01') goto LAB_1007a5f8;
  }
  else {
    *(char *)(DAT_1007a600 + 0x11) = (char)param_2;
    *(char *)(iVar1 + 0x12) = (char)param_3;
    *(undefined1 *)(iVar1 + 0x13) = 1;
  }
  if ((int)(param_3 + (0x3c - (uint)*(byte *)(iVar1 + 0x12))) % 0x3c < 0xf) {
    FUN_1007a568();
    return;
  }
LAB_1007a5f8:
  *(undefined1 *)(iVar1 + 0x13) = 0;
  return;
}

