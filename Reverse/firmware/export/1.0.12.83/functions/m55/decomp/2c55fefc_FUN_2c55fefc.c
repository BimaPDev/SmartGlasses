/* FUN_2c55fefc @ 0x2c55fefc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55fefc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puStack_6c;
  int iStack_68;
  undefined4 auStack_64 [4];
  undefined1 *puStack_54;
  int iStack_50;
  undefined1 auStack_4c [16];
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c5601e0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = FUN_2c606a10();
    iVar6 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar6 != 0) {
      FUN_2c58d410(param_1 + 8);
      iVar2 = *(int *)(param_1 + 8);
    }
    if (iVar2 != 0) {
      FUN_2c6070bc(iVar2,0x2064);
      FUN_2c60710c(iVar2,0x27d1);
      FUN_2c606f34(iVar2,0);
      FUN_2c606abc(iVar2,0x10);
      FUN_2c606d60(iVar2,0xff00ff00,0);
      FUN_2c606d6c(iVar2,0);
      FUN_2c606d9c(iVar2,0);
      FUN_2c606d30(iVar2,0x10,0);
      FUN_2c606d3c(iVar2,0x10,0);
      FUN_2c606d18(iVar2,0x10,0);
      FUN_2c606d24(iVar2,0x10,0);
      uVar3 = FUN_2c606a10(iVar2);
      iVar6 = *(int *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      if (iVar6 != 0) {
        FUN_2c58d410(param_1 + 0x58);
        uVar3 = *(undefined4 *)(param_1 + 0x58);
      }
      FUN_2c6070bc(uVar3,0x27d1);
      FUN_2c60710c(uVar3,0x27d1);
      func_0x2c606c94(uVar3,0x1fc,0);
      FUN_2c606f34(uVar3,0,0x20);
      FUN_2c6072b4(uVar3,1);
      FUN_2c606abc(uVar3,0x10);
      FUN_2c606d60(uVar3,0xff00ff00,0);
      FUN_2c606d6c(uVar3,0);
      FUN_2c606d9c(uVar3,0);
      FUN_2c606d30(uVar3,0);
      FUN_2c606d3c(uVar3,0);
      FUN_2c606d18(uVar3,0);
      FUN_2c606d24(uVar3,0);
      FUN_2c627e28(uVar3,0);
      FUN_2c606d54(uVar3,(int)*(short *)(param_1 + 0x54),0);
      uVar3 = FUN_2c637344(iVar2);
      iVar2 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      if (iVar2 != 0) {
        FUN_2c58d410(param_1 + 0xc);
        uVar3 = *(undefined4 *)(param_1 + 0xc);
      }
      FUN_2c6072b4(uVar3,1);
      FUN_2c607048(uVar3,0x27d1);
      FUN_2c606d60(uVar3,0xff00ff00,0);
      FUN_2c606d6c(uVar3,0);
      puStack_6c = auStack_64;
      FUN_2c55f948(&puStack_6c,*(int *)(param_1 + 0x20),
                   *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20));
      if (*(int *)(param_1 + 0x3c) != 0) {
        puStack_54 = auStack_4c;
        FUN_2c55f948(&puStack_54,puStack_6c,(undefined1 *)(iStack_68 + (int)puStack_6c));
        if (iStack_50 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_2c658680(_LAB_2c5601ec);
        }
        FUN_2c5392f4(&puStack_54,_LAB_2c5601e8,1);
        puVar5 = (undefined4 *)
                 FUN_2c5392f4(&puStack_54,*(undefined4 *)(param_1 + 0x38),
                              *(undefined4 *)(param_1 + 0x3c));
        uVar4 = auStack_64[0];
        puVar1 = puStack_6c;
        if ((undefined4 *)*puVar5 == puVar5 + 2) {
          uStack_34 = puVar5[2];
          uStack_30 = puVar5[3];
          uStack_2c = puVar5[4];
          uStack_28 = puVar5[5];
          puStack_3c = &uStack_34;
        }
        else {
          uStack_34 = puVar5[2];
          puStack_3c = (undefined4 *)*puVar5;
        }
        iStack_68 = puVar5[1];
        *puVar5 = puVar5 + 2;
        puVar5[1] = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        if (puStack_3c == &uStack_34) {
          if (iStack_68 != 0) {
            iStack_38 = iStack_68;
            if (iStack_68 == 1) {
              *(undefined1 *)puStack_6c = (undefined1)uStack_34;
              iStack_68 = iStack_38;
            }
            else {
              FUN_2c674668(puStack_6c,&uStack_34);
              iStack_68 = iStack_38;
            }
          }
          *(undefined1 *)((int)puStack_6c + iStack_68) = 0;
        }
        else {
          bVar7 = puStack_6c == auStack_64;
          puStack_6c = puStack_3c;
          if ((bVar7) || (auStack_64[0] = uStack_34, puVar1 == (undefined4 *)0x0)) {
            auStack_64[0] = uStack_34;
            puStack_3c = &uStack_34;
          }
          else {
            uStack_34 = uVar4;
            puStack_3c = puVar1;
          }
        }
        iStack_38 = 0;
        *(undefined1 *)puStack_3c = 0;
        if (puStack_3c != &uStack_34) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680();
        }
        if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
      }
      FUN_2c638730(uVar3,puStack_6c);
      FUN_2c606e20(uVar3,0xff00ff00,0);
      FUN_2c606e2c(uVar3,0xff,0);
      uVar4 = FUN_2c5e2e80(_LAB_2c5601e4);
      FUN_2c606e38(uVar3,uVar4,0);
      if (puStack_6c != auStack_64) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    }
  }
  if (*_LAB_2c5601e0 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

