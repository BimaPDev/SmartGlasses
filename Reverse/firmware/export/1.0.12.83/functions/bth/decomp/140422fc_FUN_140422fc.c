/* FUN_140422fc @ 0x140422fc */

void FUN_140422fc(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar1 = DAT_140423e8;
  if (7 < param_2) {
    param_2 = 8;
  }
  *(char *)(DAT_140423e8 + 0x28a) = (char)param_2;
  FUN_140e5278(iVar1 + 0x28b,param_1,param_2 * 7);
  pbVar4 = (byte *)(iVar1 + 0xc);
  do {
    pbVar3 = pbVar4 + 1;
    if ((*pbVar4 != 0xff) && (*(char *)(iVar1 + (uint)*pbVar4 + 1) == '\x05')) {
      FUN_140420a0();
      *(undefined1 *)(iVar1 + 0x288) = 1;
      return;
    }
    pbVar4 = pbVar3;
  } while (pbVar3 != (byte *)(iVar1 + 0x10));
  if ((*(byte *)(iVar1 + 0x10) != 0xff) &&
     (*(char *)((uint)*(byte *)(iVar1 + 0x10) + iVar1 + 1) == '\n')) {
    FUN_14042138();
    *(undefined1 *)(iVar1 + 0x273) = 1;
    *(undefined1 *)(iVar1 + 0x288) = 1;
    return;
  }
  if ((*(byte *)(iVar1 + 0x11) != 0xff) &&
     (*(char *)((uint)*(byte *)(iVar1 + 0x11) + iVar1 + 1) == '\x0f')) {
    FUN_14041cc4();
    *(undefined1 *)(iVar1 + 0x288) = 1;
    return;
  }
  if (*(char *)(iVar1 + 0x2c5) != '\0') {
    FUN_1402a6e8(4,0x2ff,DAT_140423f4,DAT_140423f0,DAT_140423ec);
    *(undefined1 *)(iVar1 + 0x288) = 1;
    return;
  }
  *(undefined2 *)(iVar1 + 0x288) = 0x100;
  puVar2 = (undefined1 *)FUN_14074378(0xd52,4,0,param_2 * 7 + 2 & 0xffff);
  *puVar2 = 0x53;
  puVar2[1] = (char)param_2;
  FUN_140e5278(puVar2 + 2,param_1,param_2 * 7);
  FUN_140743d0(puVar2);
  return;
}

