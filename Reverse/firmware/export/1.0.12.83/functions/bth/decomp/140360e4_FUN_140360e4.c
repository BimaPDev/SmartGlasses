/* FUN_140360e4 @ 0x140360e4 */

undefined4 FUN_140360e4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort local_26;
  int local_24;
  
  local_24 = *DAT_14036214;
  uVar5 = FUN_140e5888();
  puVar4 = DAT_14036234;
  uVar1 = DAT_14036218;
  *DAT_14036234 = uVar5;
  uVar7 = FUN_14000528();
  uVar2 = DAT_1403621c;
  FUN_1402a6e8(4,0x3f1,DAT_1403621c,uVar1,DAT_14036224,DAT_14036220,*puVar4,uVar7);
  local_26 = 0;
  FUN_1402e1fc(0x20e9,&local_26);
  puVar9 = DAT_14036228;
  local_26 = local_26 & 0xfff0;
  FUN_140e5398(0x10);
  FUN_1402e37c(0x20e9,local_26);
  uVar7 = DAT_1403622c;
  uVar8 = 0x201;
  uVar6 = 1;
  puVar10 = puVar9 + 0x13e;
  while( true ) {
    FUN_1402e37c(uVar6 & 0xfff | 0x2000,uVar8);
    if (puVar9[2] != 0) {
      FUN_140e5398((uint)puVar9[2] << 4);
    }
    FUN_1402e1fc(*puVar9 & 0xfff | 0x2000,&local_26);
    FUN_1402a6e8(4,0x409,uVar2,uVar1,uVar7,*puVar9,local_26);
    if (puVar10 == puVar9) break;
    uVar6 = puVar9[3];
    uVar8 = puVar9[4];
    puVar9 = puVar9 + 3;
  }
  FUN_14035854();
  puVar3 = DAT_14036230;
  *DAT_14036230 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined2 *)(puVar3 + 4) = 0;
  FUN_140359cc();
  FUN_14035c70();
  FUN_14035f6c();
  FUN_14030884();
  FUN_1402e1fc(0x202a,&local_26);
  local_26 = local_26 | 1;
  FUN_1402e37c(0x202a);
  if (*DAT_14036214 == local_24) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

