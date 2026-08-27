/* FUN_2c621554 @ 0x2c621554 */

void FUN_2c621554(short *param_1,short *param_2,short *param_3,short *param_4,int param_5,
                 int param_6,char *param_7)

{
  char cVar1;
  int iVar2;
  short sVar3;
  
  cVar1 = *param_7;
  if (cVar1 == '\0') {
    iVar2 = param_6 * 2 + 1;
    sVar3 = CONCAT11(*(undefined1 *)(param_5 + param_6 * 2),*(undefined1 *)(param_5 + iVar2));
    *param_3 = sVar3;
    *param_2 = sVar3;
    *param_1 = sVar3;
    if ((*(int *)(param_7 + 0x10) != 0) &&
       ((uint)*(byte *)(param_5 + iVar2) + (uint)*(byte *)(param_5 + param_6 * 2) * 0x100 ==
        *(int *)(param_7 + 0x14))) {
LAB_2c6215a0:
      *param_4 = 0;
      return;
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x04') {
        iVar2 = param_5 + param_6 * 4;
        sVar3 = CONCAT11(*(undefined1 *)(param_5 + param_6 * 4),*(undefined1 *)(iVar2 + 1));
        *param_3 = sVar3;
        *param_2 = sVar3;
        *param_1 = sVar3;
        *param_4 = (ushort)*(byte *)(iVar2 + 3) + (ushort)*(byte *)(iVar2 + 2) * 0x100;
        return;
      }
      if (cVar1 != '\x06') {
        return;
      }
      iVar2 = param_5 + param_6 * 8;
      *param_1 = (ushort)*(byte *)(iVar2 + 1) + (ushort)*(byte *)(param_5 + param_6 * 8) * 0x100;
      *param_2 = (ushort)*(byte *)(iVar2 + 3) + (ushort)*(byte *)(iVar2 + 2) * 0x100;
      *param_3 = (ushort)*(byte *)(iVar2 + 5) + (ushort)*(byte *)(iVar2 + 4) * 0x100;
      *param_4 = (ushort)*(byte *)(iVar2 + 7) + (ushort)*(byte *)(iVar2 + 6) * 0x100;
      return;
    }
    param_6 = param_6 * 6;
    *param_1 = (ushort)*(byte *)(param_5 + param_6 + 1) +
               (ushort)*(byte *)(param_5 + param_6) * 0x100;
    *param_2 = (ushort)*(byte *)(param_5 + param_6 + 3) +
               (ushort)*(byte *)(param_5 + param_6 + 2) * 0x100;
    *param_3 = (ushort)*(byte *)(param_5 + param_6 + 5) +
               (ushort)*(byte *)(param_5 + param_6 + 4) * 0x100;
    if ((((*(int *)(param_7 + 0x10) != 0) &&
         ((uint)*(byte *)(param_5 + param_6 + 1) + (uint)*(byte *)(param_5 + param_6) * 0x100 ==
          *(int *)(param_7 + 0x14))) &&
        ((uint)*(byte *)(param_5 + param_6 + 3) + (uint)*(byte *)(param_5 + param_6 + 2) * 0x100 ==
         *(int *)(param_7 + 0x18))) &&
       ((uint)*(byte *)(param_5 + param_6 + 5) + (uint)*(byte *)(param_5 + param_6 + 4) * 0x100 ==
        *(int *)(param_7 + 0x1c))) goto LAB_2c6215a0;
  }
  *param_4 = -1;
  return;
}

