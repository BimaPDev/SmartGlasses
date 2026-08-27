/* FUN_140429b8 @ 0x140429b8 */

void FUN_140429b8(undefined4 param_1,undefined2 param_2,undefined2 param_3,uint param_4,byte param_5
                 )

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)param_5;
  iVar1 = FUN_14043fa8();
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_14074378(0xe40,3,0,0xe,uVar3);
    uVar3 = DAT_14042a28;
    puVar2[1] = 0x40;
    *(undefined2 *)(puVar2 + 2) = param_2;
    *(undefined2 *)(puVar2 + 4) = param_3;
    *(ushort *)(puVar2 + 6) = (ushort)param_5;
    *(short *)(puVar2 + 8) = (short)(uint)((ulonglong)uVar3 * (ulonglong)param_4 >> 0x23);
    *puVar2 = (char)param_1;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    FUN_140743d0();
    return;
  }
  FUN_1402a6e8(4,0x7de,DAT_14042a38,DAT_14042a34,DAT_14042a30,param_1,DAT_14042a2c);
  return;
}

