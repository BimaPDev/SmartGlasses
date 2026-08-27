/* FUN_140359cc @ 0x140359cc */

void FUN_140359cc(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  pcVar2 = DAT_14035a60;
  FUN_1402a6e8(4,0x290,DAT_14035a6c,DAT_14035a68,DAT_14035a64,*DAT_14035a60);
  puVar3 = DAT_14035a70;
  cVar1 = *pcVar2;
  *DAT_14035a70 = 0x100;
  uVar6 = DAT_14035a80;
  uVar4 = DAT_14035a78;
  if (cVar1 == '\0') {
    uVar8 = 8;
    puVar3[2] = DAT_14035a74;
    puVar3[3] = uVar4;
    *(undefined2 *)((int)puVar3 + 6) = 0xc0c;
    uVar9 = 0xc;
    uVar7 = 4;
    uVar10 = 1;
    uVar11 = 0xfe;
    uVar12 = 0xfc;
    *(undefined1 *)(puVar3 + 1) = 8;
    *(undefined2 *)(puVar3 + 4) = 0xfcfc;
  }
  else {
    *(undefined1 *)(puVar3 + 1) = 7;
    uVar4 = DAT_14035a84;
    *(undefined2 *)(puVar3 + 4) = 0xfbfb;
    *(undefined2 *)((int)puVar3 + 6) = 0xf0f;
    puVar3[3] = uVar4;
    uVar9 = 0xf;
    uVar8 = 10;
    uVar7 = 6;
    uVar10 = 2;
    uVar11 = 0xff;
    uVar12 = 0xfb;
    puVar3[2] = uVar6;
  }
  puVar5 = DAT_14035a7c;
  *DAT_14035a7c = uVar12;
  puVar5[1] = uVar11;
  puVar5[2] = uVar10;
  puVar5[3] = uVar7;
  puVar5[4] = uVar8;
  puVar5[5] = uVar9;
  puVar5[6] = uVar9;
  puVar5[7] = uVar9;
  return;
}

