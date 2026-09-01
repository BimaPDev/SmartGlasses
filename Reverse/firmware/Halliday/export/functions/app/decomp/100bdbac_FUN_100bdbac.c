/* FUN_100bdbac @ 0x100bdbac */

void FUN_100bdbac(undefined4 param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint local_54;
  undefined1 local_50;
  undefined1 auStack_4c [2];
  undefined2 local_4a;
  undefined4 *local_44;
  uint local_38;
  ushort local_34;
  ushort local_32;
  ushort local_2f;
  ushort local_2d;
  ushort local_2b;
  
  uVar3 = DAT_100bdcf0;
  uVar2 = DAT_100bdcec;
  puVar1 = DAT_100bdce4;
  if (param_3 != 0) {
    uVar9 = (DAT_100bdcdc - DAT_100bdce0) * 0x20 & 0xff00U | DAT_100bdce8;
    pcVar8 = param_2 + param_3 * 8;
    do {
      if ((*param_2 == '\x01') && (uVar7 = (uint)*(ushort *)(param_2 + 2), uVar7 < 0x18)) {
        FUN_1013d03e(&local_38,*(undefined4 *)(param_2 + 4),uVar7,0x18);
        *(undefined1 *)((int)&local_38 + uVar7) = 0;
        local_54 = local_38;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(puVar1 + 2) = 0;
        local_50 = 0;
        uVar5 = FUN_1013d036(&local_54);
        *(undefined2 *)((int)puVar1 + 6) = uVar5;
        local_54 = (uint)local_34;
        local_50 = 0;
        uVar4 = FUN_1013d036(&local_54);
        *(undefined1 *)(puVar1 + 1) = uVar4;
        local_54 = (uint)local_32;
        local_50 = 0;
        uVar4 = FUN_1013d036(&local_54);
        *(undefined1 *)((int)puVar1 + 3) = uVar4;
        local_54 = (uint)local_2f;
        local_50 = 0;
        uVar4 = FUN_1013d036(&local_54);
        *(undefined1 *)((int)puVar1 + 2) = uVar4;
        local_54 = (uint)local_2d;
        local_50 = 0;
        uVar4 = FUN_1013d036(&local_54);
        *(undefined1 *)((int)puVar1 + 1) = uVar4;
        local_54 = (uint)local_2b;
        local_50 = 0;
        uVar4 = FUN_1013d036(&local_54);
        *(undefined1 *)puVar1 = uVar4;
        FUN_100a5b78(uVar9,uVar3,uVar2,&local_38,*(undefined2 *)((int)puVar1 + 6),
                     *(undefined1 *)(puVar1 + 1),*(undefined1 *)((int)puVar1 + 3),
                     *(undefined1 *)((int)puVar1 + 2),*(undefined1 *)((int)puVar1 + 1),uVar4);
        FUN_1011ea48(auStack_4c,0,0x14);
        local_44 = puVar1;
        local_4a = 0x271e;
        uVar6 = FUN_1009e224();
        FUN_1009ece8(uVar6,auStack_4c);
      }
      param_2 = param_2 + 8;
    } while (param_2 != pcVar8);
  }
  return;
}

