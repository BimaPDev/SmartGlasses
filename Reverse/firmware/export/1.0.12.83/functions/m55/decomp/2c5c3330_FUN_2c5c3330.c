/* FUN_2c5c3330 @ 0x2c5c3330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c3330(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 auStack_70 [2];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [16];
  int *piStack_44;
  undefined4 uStack_40;
  int aiStack_3c [4];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5c34c4;
  FUN_2c524860(1,param_2,param_3,0);
  iVar4 = 1;
  uStack_58 = 0;
  auStack_54[0] = 0;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x4c) + 0xb4);
  auStack_70[0] = 1;
  if (9 < uVar5) {
    if (uVar5 < 100) {
      iVar4 = 2;
    }
    else if (uVar5 < 1000) {
      iVar4 = 3;
    }
    else {
      uVar7 = uVar5;
      if (uVar5 < 10000) {
        iVar4 = 4;
      }
      else {
        do {
          iVar6 = iVar4;
          iVar4 = iVar6 + 4;
          if (uVar7 <= _LAB_2c5c34cc) goto LAB_2c5c33bc;
          if (uVar7 <= _LAB_2c5c34d0) {
            iVar4 = iVar6 + 5;
            goto LAB_2c5c33bc;
          }
          if (uVar7 < _LAB_2c5c34d4) {
            iVar4 = iVar6 + 6;
            goto LAB_2c5c33bc;
          }
          bVar1 = _LAB_2c5c34d8 < uVar7;
          uVar7 = (uint)((ulonglong)_LAB_2c5c34c8 * (ulonglong)uVar7 >> 0x2d);
        } while (bVar1);
        iVar4 = iVar6 + 7;
      }
    }
  }
LAB_2c5c33bc:
  puStack_5c = auStack_54;
  piStack_44 = aiStack_3c;
  FUN_2c65e9fa(&piStack_44,iVar4,0);
  func_0x2c5c2fe8(piStack_44,uStack_40,uVar5);
  FUN_2c5c319c(&puStack_5c,0,uStack_58,piStack_44,uStack_40);
  if (piStack_44 != aiStack_3c) {
    thunk_FUN_2c669588(piStack_44,aiStack_3c[0] + 1);
  }
  puStack_6c = puStack_5c;
  iVar4 = func_0x2c5bd4d0();
  if (*(int *)(*(int *)(iVar4 + 4) + 8) == 0) {
LAB_2c5c3402:
    iVar6 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar4 = func_0x2c5bd4d0();
    iVar6 = *(int *)(param_1 + 0x4c);
    uVar7 = *(uint *)(iVar6 + 0x24);
    uVar8 = *(uint *)(*(int *)(iVar4 + 4) + 8);
    uVar5 = uVar8;
    if (uVar7 <= uVar8) {
      uVar5 = uVar7;
    }
    if (((uVar5 == 0) ||
        (iVar4 = FUN_2c66960c(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),*(undefined4 *)(iVar6 + 0x20)
                             ), iVar4 == 0)) && (uVar8 == uVar7)) {
      iVar6 = *(int *)(iVar6 + 0xb4);
      iVar4 = func_0x2c5bd4d0();
      if ((uint)(iVar6 - *(int *)(*(int *)(iVar4 + 4) + 0x1c)) < 30000) {
        iVar4 = *(int *)(param_1 + 0x4c);
        puVar3 = (undefined4 *)
                 FUN_2c5392f4(iVar4 + 0x50,*(undefined4 *)(iVar4 + 0x98),
                              *(undefined4 *)(iVar4 + 0x9c));
        uStack_68 = *puVar3;
        goto LAB_2c5c3420;
      }
      goto LAB_2c5c3402;
    }
  }
  uVar2 = FUN_2c5392f4(iVar6 + 0x38,*(undefined4 *)(iVar6 + 0x50),*(undefined4 *)(iVar6 + 0x54));
  puVar3 = (undefined4 *)
           FUN_2c5392f4(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x98),
                        *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x9c));
  uStack_68 = *puVar3;
LAB_2c5c3420:
  uStack_64 = param_2;
  uStack_60 = param_3;
  FUN_2c5245b0(auStack_70);
  if (puStack_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5c34c4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

