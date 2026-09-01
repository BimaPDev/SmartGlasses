/* FUN_100b418c @ 0x100b418c */

undefined4 FUN_100b418c(uint param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  
  local_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  if ((param_2[2] == '\x10') || (param_2[2] == '\b')) {
    uVar5 = FUN_1012e0a2(0x2e,*param_2);
    puVar2 = DAT_100b4318;
    if (0x355 < uVar5) {
      *DAT_100b4318 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar1 = PTR_DAT_100b430c;
      *(undefined1 *)puVar2 = *param_2;
      iVar6 = FUN_10064eb8(0);
      iVar9 = (int)puVar1 - (int)PTR_DAT_100b4310;
      puVar2[1] = iVar6;
      uVar5 = iVar9 * 0x20 & 0xff00;
      if (iVar6 == 0) {
        FUN_100a5b78(uVar5 | 0x520011,DAT_100b431c);
        if (puVar2[1] != 0) {
          FUN_10064c60();
        }
        return 0xfffffff4;
      }
      uVar7 = FUN_1012e06e(0x2e,*param_2);
      puVar2[2] = uVar7;
      FUN_1011ea48(uVar7,0,0x356);
      iVar11 = puVar2[2];
      iVar6 = FUN_100a9d10(5,0,0);
      iVar9 = iVar11 + 0x2c;
      if (iVar6 == 0) {
        FUN_1011ea48(iVar9,0);
      }
      else {
        FUN_1011ea40(iVar9,iVar6 + 0x41c,0x200);
        FUN_1011ea40(iVar11 + 0x22c,iVar6 + 0x61c,0x128);
      }
      uVar10 = 0;
      puVar8 = (undefined2 *)puVar2[2];
      *puVar8 = 0;
      *(byte *)(puVar8 + 0x1aa) = *(byte *)(puVar8 + 0x1aa) & 0xfc | 3;
      puVar8[1] = 0;
      puVar8[3] = 0;
      uVar3 = FUN_100a7d8c(5);
      FUN_100a7314(5,uVar3);
      uVar4 = FUN_100af514();
      iVar6 = puVar2[2];
      *(undefined2 *)(iVar6 + 4) = 1;
      *(undefined2 *)(iVar6 + 8) = uVar4;
      if (iVar6 + 0xd00d0000U < 0xc000) {
        uVar10 = iVar6 + 0xd00d0000U >> 1;
      }
      else if (iVar6 + 0xd0020000U < 0x78000) {
        uVar10 = (iVar6 + 0xd0020000U >> 1) + 0x40000000;
      }
      else if (iVar6 + 0xd00e8000U < 0x8000) {
        uVar10 = (iVar6 + 0xd00e8000U >> 1) + 0x40100000;
      }
      local_24 = (undefined1 *)0x4;
      local_28 = uVar10;
      FUN_100b413c(puVar2[1],2,&local_28);
      FUN_100b413c(puVar2[1],3,&local_28);
      uVar7 = DAT_100b4320;
      *(undefined4 **)(param_1 + 4) = puVar2;
      FUN_100a5b78(uVar5 | 0x720031,uVar7);
      return 0;
    }
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100b430c - (int)PTR_DAT_100b4310) * 0x20 & 0xff00U | 0x440011,
                 PTR_s_error_param__d_100b4314);
  }
  return 0xffffffea;
}

