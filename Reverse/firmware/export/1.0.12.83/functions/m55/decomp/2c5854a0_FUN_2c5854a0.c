/* FUN_2c5854a0 @ 0x2c5854a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5854a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puStack_50;
  undefined4 auStack_4c [8];
  int iStack_2c;
  
  piVar1 = _LAB_2c585730;
  iStack_2c = *_LAB_2c585720;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
    iVar11 = 0;
    uVar12 = 0;
    do {
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar2 = (undefined4 *)FUN_2c47245c(0,0x68);
      uVar12 = uVar12 + 1;
      FUN_2c674268(puVar2,0,0x68);
      uVar9 = uVar12 & 1;
      if (uVar9 == 0) {
        uVar9 = 2;
      }
      *puVar2 = _LAB_2c585724;
      puVar2[0xe] = puVar2 + 0x10;
      puVar2[8] = puVar2 + 10;
      *(undefined1 *)(puVar2 + 4) = 0;
      puVar2[9] = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 0x10) = 0;
      *(undefined1 *)(puVar2 + 0x16) = 0;
      puVar2[1] = uVar9;
      puVar2[0x14] = puVar2 + 0x16;
      puVar2[0x15] = 0;
      puVar2[2] = puVar2 + 4;
      puVar2[3] = 0;
      puStack_50 = puVar2;
      FUN_2c52f5f4(puVar2 + 2,*(int *)(*(int *)(param_1 + 4) + iVar11) + 4);
      func_0x2c584648(param_1,auStack_4c,0x1f,
                      *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + iVar11) + 0x1c));
      puVar2 = puStack_50;
      uVar9 = FUN_2c66c4ec(auStack_4c);
      if ((0x7fffffff - puVar2[9] < uVar9) ||
         (iVar3 = FUN_2c5392f4(puVar2 + 8,auStack_4c,uVar9), 0x7fffffffU - *(int *)(iVar3 + 4) < 2))
      {
                    /* WARNING: Subroutine does not return */
        FUN_2c658680(_LAB_2c58572c);
      }
      uVar4 = FUN_2c5392f4(iVar3,_LAB_2c585728,2);
      iVar3 = *(int *)(*(int *)(param_1 + 4) + iVar11);
      uVar4 = FUN_2c5392f4(uVar4,*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24));
      FUN_2c52f5f4(puStack_50 + 8,uVar4);
      iVar3 = *(int *)(*(int *)(param_1 + 4) + iVar11);
      uVar4 = FUN_2c5392f4(puStack_50 + 0xe,*(undefined4 *)(iVar3 + 0x20),
                           *(undefined4 *)(iVar3 + 0x24));
      FUN_2c52f5f4(puStack_50 + 0xe,uVar4);
      puVar2 = puStack_50;
      uVar9 = FUN_2c66c4ec(auStack_4c);
      puVar10 = (undefined4 *)puVar2[0x14];
      uVar8 = puVar2[0x15];
      if (puVar10 == puVar2 + 0x16) {
        uVar5 = 0xf;
      }
      else {
        uVar5 = puVar2[0x16];
      }
      if (uVar5 < uVar9) {
        FUN_2c52263c(puVar2 + 0x14,0,uVar8,auStack_4c,uVar9);
LAB_2c585676:
        puVar10 = (undefined4 *)puVar2[0x14];
LAB_2c585620:
        puVar2[0x15] = uVar9;
        *(undefined1 *)((int)puVar10 + uVar9) = 0;
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        if (puVar2 == *(undefined4 **)(param_1 + 0x18)) goto LAB_2c585602;
LAB_2c58562c:
        *puVar2 = puStack_50;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      }
      else {
        if ((auStack_4c < puVar10) ||
           (puVar6 = (undefined4 *)((int)puVar10 + uVar8), puVar6 < auStack_4c)) {
          if (uVar9 != 0) {
            if (uVar9 == 1) {
LAB_2c58567a:
              *(undefined1 *)puVar10 = (undefined1)auStack_4c[0];
              puVar10 = (undefined4 *)puVar2[0x14];
            }
            else {
              FUN_2c674668(puVar10,auStack_4c,uVar9);
              puVar10 = (undefined4 *)puVar2[0x14];
            }
          }
          goto LAB_2c585620;
        }
        if (uVar9 == 0) goto LAB_2c585620;
        if (uVar8 < uVar9) {
          if (puVar6 < (undefined4 *)((int)auStack_4c + uVar9)) {
            if (auStack_4c < puVar6) {
              iVar3 = (int)puVar6 - (int)auStack_4c;
              if (iVar3 == 1) {
                *(undefined1 *)puVar10 = (undefined1)auStack_4c[0];
              }
              else if (iVar3 != 0) {
                puVar10 = (undefined4 *)FUN_2c673eb8(puVar10,auStack_4c);
              }
              iVar7 = uVar9 - iVar3;
              if (iVar7 == 1) {
                *(undefined1 *)((int)puVar10 + iVar3) = *(undefined1 *)((int)puVar10 + uVar9);
                puVar10 = (undefined4 *)puVar2[0x14];
              }
              else {
                if (iVar7 == 0) goto LAB_2c585676;
                FUN_2c674668((undefined1 *)((int)puVar10 + iVar3),
                             (undefined1 *)((int)puVar10 + uVar9),iVar7);
                puVar10 = (undefined4 *)puVar2[0x14];
              }
            }
            else if (uVar9 == 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)((int)auStack_4c + (uVar9 - uVar8));
              puVar10 = (undefined4 *)puVar2[0x14];
            }
            else if (uVar9 != 0) {
              FUN_2c674668(puVar10,(undefined1 *)((int)auStack_4c + (uVar9 - uVar8)),uVar9);
              puVar10 = (undefined4 *)puVar2[0x14];
            }
          }
          else {
            if (uVar9 == 1) goto LAB_2c58567a;
            if (uVar9 != 0) goto LAB_2c5855ea;
          }
          goto LAB_2c585620;
        }
        if (uVar9 == 1) {
          *(undefined1 *)puVar10 = (undefined1)auStack_4c[0];
          puVar10 = (undefined4 *)puVar2[0x14];
          goto LAB_2c585620;
        }
LAB_2c5855ea:
        FUN_2c673eb8(puVar10,auStack_4c,uVar9);
        puVar2[0x15] = uVar9;
        *(undefined1 *)(puVar2[0x14] + uVar9) = 0;
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        if (puVar2 != *(undefined4 **)(param_1 + 0x18)) goto LAB_2c58562c;
LAB_2c585602:
        FUN_2c58483c(param_1 + 0x10,puVar2,&puStack_50);
      }
      iVar11 = iVar11 + 4;
    } while (uVar12 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  if (*_LAB_2c585720 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

