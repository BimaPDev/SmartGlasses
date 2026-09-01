/* FUN_100b4494 @ 0x100b4494 */

undefined4 FUN_100b4494(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_28 [4];
  
  uVar2 = FUN_100a7d8c(*param_2);
  uVar4 = FUN_1012e0a2(0x2e,*param_2);
  puVar1 = DAT_100b4654;
  if (0x4ff < uVar4) {
    FUN_1011ea48(DAT_100b4654,0,0x10);
    iVar5 = FUN_10064eb8(0);
    iVar9 = (int)PTR_DAT_100b463c - (int)PTR_DAT_100b4640;
    *(int *)(puVar1 + 8) = iVar5;
    uVar4 = iVar9 * 0x20 & 0xff00;
    if (iVar5 != 0) {
      uVar6 = FUN_1012e06e(0x2e,*param_2);
      *(undefined4 *)(puVar1 + 0xc) = uVar6;
      FUN_1011ea48(uVar6,0,0x500);
      iVar9 = *(int *)(puVar1 + 0xc);
      iVar5 = FUN_100a9d10(param_2[1],0);
      if (iVar5 == 0) {
        FUN_1011ea48();
      }
      else {
        FUN_1011ea40(iVar9 + 0x100,iVar5 + 0x1c,0x400);
      }
      *puVar1 = *param_2;
      uVar3 = FUN_100a7314();
      *(undefined2 *)(puVar1 + 2) = uVar3;
      uVar3 = FUN_100a7314(*puVar1,uVar2 & 0xff);
      puVar10 = *(undefined2 **)(puVar1 + 0xc);
      *(undefined2 *)(puVar1 + 4) = uVar3;
      puVar10[0xd] = 0x80;
      *puVar10 = 1;
      puVar10[10] = 2;
      uVar7 = FUN_100af4e0(param_2[2]);
      uVar6 = DAT_100b4648;
      uVar8 = 0;
      iVar5 = *(int *)(puVar1 + 0xc);
      *(undefined4 *)(puVar10 + 8) = uVar7;
      *(undefined4 *)(iVar5 + 0xe4) = uVar6;
      *(ushort *)(iVar5 + 8) = uVar2;
      *(undefined2 *)(iVar5 + 0x24) = 2;
      *(undefined2 *)(iVar5 + 0x2c) = 0;
      *(undefined2 *)(iVar5 + 4) = 1;
      *(undefined2 *)(iVar5 + 0xe0) = 1;
      FUN_100a7314(*puVar1,uVar2 & 0xff);
      iVar5 = FUN_100af514();
      *(int *)(*(int *)(puVar1 + 0xc) + 0xc) = iVar5 << 0x10;
      FUN_100a5b78(uVar4 | 0x680031,DAT_100b464c);
      iVar5 = *(int *)(puVar1 + 0xc);
      if (iVar5 + 0xd00d0000U < 0xc000) {
        uVar8 = iVar5 + 0xd00d0000U >> 1;
      }
      else if (iVar5 + 0xd0020000U < 0x78000) {
        uVar8 = (iVar5 + 0xd0020000U >> 1) + 0x40000000;
      }
      else if (iVar5 + 0xd00e8000U < 0x8000) {
        uVar8 = (iVar5 + 0xd00e8000U >> 1) + 0x40100000;
      }
      uVar6 = *(undefined4 *)(puVar1 + 8);
      puVar10 = (undefined2 *)thunk_FUN_1009f30c(0x1c,DAT_100b4650);
      if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0x120;
        *(undefined4 *)(puVar10 + 2) = 0;
        *(undefined4 *)(puVar10 + 4) = 0x10;
        *(undefined4 *)(puVar10 + 6) = 2;
        *(undefined4 *)(puVar10 + 8) = 3;
        *(uint *)(puVar10 + 10) = uVar8;
        *(undefined4 *)(puVar10 + 0xc) = 4;
        FUN_10064d1c(uVar6,puVar10,0,auStack_28);
        FUN_1012d1f4(puVar10);
      }
      *(undefined1 **)(param_1 + 4) = puVar1;
      return 0;
    }
    FUN_100a5b78(uVar4 | 0x4c0011,PTR_s_dsp_open_global_session_failed_100b4644);
    if (*(int *)(puVar1 + 8) != 0) {
      FUN_10064c60();
    }
  }
  return 0xfffffff4;
}

