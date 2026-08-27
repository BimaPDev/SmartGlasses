/* FUN_1407a3d0 @ 0x1407a3d0 */

undefined1 * FUN_1407a3d0(undefined4 param_1,int param_2,short *param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_1407a4e8;
  cVar1 = *(char *)(*(int *)(param_2 + 8) + 1) + '\x06';
  if (*(char *)(DAT_1407a4e8 + 0x11) != '\0') {
    cVar1 = cVar1 + *(char *)(*(int *)(param_2 + 0xc) + 2) + '\x04';
  }
  if ((param_4 == 0xc) && (*(char *)(param_2 + 0x10) != '\0')) {
    cVar1 = cVar1 + '\x02';
  }
  puVar2 = (undefined1 *)FUN_140759b8(cVar1);
  if (puVar2 != (undefined1 *)0x0) {
    *param_3 = *param_3 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *param_3 = (ushort)*(byte *)(*(int *)(param_2 + 8) + 1) + *param_3 + 4;
    puVar2[2] = 7;
    cVar1 = *(char *)(*(int *)(param_2 + 8) + 1);
    puVar2[4] = 0;
    puVar2[3] = cVar1 + '\x02';
    puVar2[5] = **(undefined1 **)(param_2 + 8);
    FUN_140e5278(puVar2 + 6,*(undefined4 *)(*(int *)(param_2 + 8) + 2),
                 *(undefined1 *)(*(int *)(param_2 + 8) + 1));
    if (*(char *)(iVar4 + 0x11) != '\0') {
      uVar3 = (uint)*(byte *)(*(int *)(param_2 + 8) + 1);
      *param_3 = (ushort)*(byte *)(*(int *)(param_2 + 0xc) + 2) + *param_3 + 4;
      puVar2[uVar3 + 6] = 4;
      puVar2[uVar3 + 7] = *(char *)(*(int *)(param_2 + 0xc) + 2) + '\x02';
      puVar2[uVar3 + 8] = (char)**(undefined2 **)(param_2 + 0xc);
      puVar2[uVar3 + 9] = (char)((ushort)**(undefined2 **)(param_2 + 0xc) >> 8);
      FUN_140e5278(puVar2 + uVar3 + 10,*(undefined4 *)(*(int *)(param_2 + 0xc) + 3),
                   *(undefined1 *)(*(int *)(param_2 + 0xc) + 2));
    }
    if ((param_4 == 0xc) && (*(char *)(param_2 + 0x10) != '\0')) {
      if (*(char *)(iVar4 + 0x11) == '\0') {
        iVar4 = *(byte *)(*(int *)(param_2 + 8) + 1) + 6;
      }
      else {
        iVar4 = (uint)*(byte *)(*(int *)(param_2 + 8) + 1) +
                (uint)*(byte *)(*(int *)(param_2 + 0xc) + 2) + 10;
      }
      *param_3 = *param_3 + 2;
      *(undefined2 *)(puVar2 + iVar4) = 8;
      return puVar2;
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1407a4e4);
}

