/* FUN_140a1958 @ 0x140a1958 */

char FUN_140a1958(undefined4 *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  pcVar1 = DAT_140a1a8c;
  uVar4 = DAT_140a1a90;
  if (*DAT_140a1a8c == '\0') {
    FUN_1402a6e8(4,1000,DAT_140a1a9c,DAT_140a1a98,DAT_140a1aac,DAT_140a1a90);
  }
  else {
    FUN_1402a6e8(4,0x3c1,DAT_140a1a9c,DAT_140a1a98,DAT_140a1a94,DAT_140a1a90);
    puVar6 = DAT_140a1ac4;
    puVar7 = DAT_140a1aa4;
    if (*DAT_140a1aa0 == '\x01') {
      puVar7 = (undefined4 *)*param_1;
      puVar5 = DAT_140a1ac4 + -0x3f;
      *puVar7 = *DAT_140a1ac4;
      *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar6 + 1);
      puVar7 = (undefined4 *)param_1[1];
      *puVar7 = puVar6[2];
      *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar6 + 3);
      param_1[2] = puVar5;
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *puVar6 = *DAT_140a1aa4;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar7 + 1);
      puVar6 = (undefined4 *)param_1[1];
      puVar5 = puVar7 + -0x3f;
      *puVar6 = *puVar7;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar7 + 1);
      param_1[2] = puVar5;
      param_1[3] = puVar5;
    }
    uVar2 = FUN_140dd3a4(puVar5);
    if (0x19 < uVar2) {
      uVar2 = 0x1a;
    }
    iVar3 = FUN_140e5278(DAT_140a1aa8,puVar5,uVar2);
    *(undefined1 *)(iVar3 + uVar2) = 0;
    FUN_140390c8();
    FUN_140390a0(*param_1);
  }
  FUN_1402a6e8(4,0x3eb,DAT_140a1a9c,DAT_140a1a98,DAT_140a1ab0,uVar4);
  FUN_1402a9fc(DAT_140a1ab4,1,6,*param_1);
  FUN_1402a6e8(4,0x3ed,DAT_140a1a9c,DAT_140a1a98,DAT_140a1ab8);
  FUN_1402a9fc(DAT_140a1ab4,1,6,param_1[1]);
  uVar8 = param_1[2];
  uVar4 = FUN_140dd3a4(uVar8);
  FUN_1402a6e8(4,0x3ef,DAT_140a1a9c,DAT_140a1a98,DAT_140a1abc,uVar8,uVar4);
  iVar3 = param_1[3];
  if (iVar3 != 0) {
    uVar4 = FUN_140dd3a4(iVar3);
    FUN_1402a6e8(4,0x3f2,DAT_140a1a9c,DAT_140a1a98,DAT_140a1ac0,iVar3,uVar4);
  }
  return *pcVar1;
}

