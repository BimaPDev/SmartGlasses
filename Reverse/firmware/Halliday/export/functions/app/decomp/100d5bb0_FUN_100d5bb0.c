/* FUN_100d5bb0 @ 0x100d5bb0 */

undefined4 FUN_100d5bb0(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_35;
  undefined1 auStack_34 [20];
  
  puVar2 = (undefined4 *)FUN_10136428();
  iVar3 = FUN_100d4588(param_1,0);
  uVar8 = (DAT_100d5ce8 - DAT_100d5cec) * 0x20 & 0xff00;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)FUN_100b9d90(0xb4);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_100a5b78(DAT_100d5cfc | uVar8,DAT_100d5cf8,DAT_100d5d00);
      uVar4 = 0xffffffed;
    }
    else {
      FUN_1011ea48(puVar5,0,0xb4);
      puVar5[1] = *puVar2;
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar2 + 1);
      *(byte *)(puVar5 + 0xe) = *(byte *)(puVar5 + 0xe) | 1;
      uVar4 = FUN_1013199c(param_1);
      puVar5[3] = uVar4;
      uVar1 = FUN_10131c1c(param_1);
      puVar7 = DAT_100d5d04;
      *puVar5 = 0;
      puVar7 = (undefined4 *)*puVar7;
      *(undefined2 *)(puVar5 + 5) = uVar1;
      if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
        *puVar7 = puVar5;
        puVar7[1] = puVar5;
      }
      else {
        *(undefined4 *)puVar7[1] = puVar5;
        puVar7[1] = puVar5;
      }
      *(undefined1 *)((int)puVar5 + 0x41) = 1;
      *(undefined1 *)((int)puVar5 + 0x42) = 8;
      *(undefined1 *)((int)puVar5 + 0x47) = 0x7f;
      iVar3 = FUN_10131e9c(param_1,&local_35);
      if (iVar3 == 0) {
        *(undefined1 *)((int)puVar5 + 0x47) = local_35;
      }
      iVar3 = FUN_100b9d90(0x18);
      if (iVar3 == 0) {
        FUN_100a5b78(DAT_100d5d08 | uVar8,DAT_100d5cf8,DAT_100d5d0c);
        uVar4 = 0xfffffff4;
      }
      else {
        FUN_100d6c3c(iVar3,3);
        iVar9 = iVar3;
        do {
          if (((int)((uint)*(byte *)(iVar9 + 6) << 0x1f) < 0) &&
             (iVar6 = FUN_1011ea30(iVar9,puVar2,6), iVar6 == 0)) {
            if ((int)((uint)*(byte *)(iVar9 + 7) << 0x1f) < 0) {
              FUN_100d5b04(param_1,1);
            }
            break;
          }
          iVar9 = iVar9 + 8;
        } while (iVar9 != iVar3 + 0x18);
        FUN_100b9e04(iVar3);
        FUN_100d4748(puVar2,auStack_34);
        FUN_100a5b78(DAT_100d5d10 | uVar8,DAT_100d5cf8,DAT_100d5d14,auStack_34,
                     (int)*(char *)((int)puVar5 + 0x47));
        uVar4 = 0;
      }
    }
  }
  else {
    FUN_100a5b78(DAT_100d5cf0 | uVar8,DAT_100d5cf8,DAT_100d5cf4);
    uVar4 = 0xffffffef;
  }
  return uVar4;
}

