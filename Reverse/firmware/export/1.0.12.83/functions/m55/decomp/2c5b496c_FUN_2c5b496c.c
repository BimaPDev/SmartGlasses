/* FUN_2c5b496c @ 0x2c5b496c */

void FUN_2c5b496c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  FUN_2c48e424(param_1,*param_2);
  puVar2 = (undefined4 *)FUN_2c48de10();
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b4b10,0x46,DAT_2c5b4b0c,DAT_2c5b4b08,*param_2);
  }
  uVar3 = FUN_2c66c4ec();
  piVar1 = DAT_2c5b4b14;
  puVar8 = (undefined4 *)*param_3;
  if (puVar8 == param_3 + 2) {
    if (0xf < uVar3) {
      if (0x1d < uVar3) goto LAB_2c5b4a2a;
      uVar7 = 0x1e;
LAB_2c5b4a24:
      iVar4 = uVar7 + 1;
      goto LAB_2c5b4a2e;
    }
  }
  else {
    uVar6 = param_3[2];
    if (uVar6 < uVar3) {
      uVar7 = uVar6 * 2;
      if (uVar3 < uVar6 << 1) {
        if (-1 < (int)uVar7) goto LAB_2c5b4a24;
        iVar4 = -0x80000000;
        uVar7 = 0x7fffffff;
      }
      else {
LAB_2c5b4a2a:
        iVar4 = uVar3 + 1;
        uVar7 = uVar3;
      }
LAB_2c5b4a2e:
      if (*DAT_2c5b4b14 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar8 = (undefined4 *)FUN_2c47245c(0,iVar4);
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
        }
        else {
          FUN_2c674668(puVar8,puVar2,uVar3);
        }
      }
      if (param_3 + 2 != (undefined4 *)*param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *param_3 = puVar8;
      param_3[2] = uVar7;
      goto LAB_2c5b49c2;
    }
  }
  if (puVar2 < puVar8) {
LAB_2c5b49ce:
    if (uVar3 == 0) goto LAB_2c5b49c2;
    if (uVar3 != 1) {
      FUN_2c674668(puVar8,puVar2,uVar3);
      puVar8 = (undefined4 *)*param_3;
      goto LAB_2c5b49c2;
    }
  }
  else {
    uVar7 = param_3[1];
    puVar5 = (undefined4 *)((int)puVar8 + uVar7);
    if (puVar5 < puVar2) goto LAB_2c5b49ce;
    if (uVar3 == 0) goto LAB_2c5b49c2;
    if (uVar3 <= uVar7) {
      if (uVar3 == 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
        puVar8 = (undefined4 *)*param_3;
        goto LAB_2c5b49c2;
      }
LAB_2c5b49b6:
      FUN_2c673eb8(puVar8,puVar2,uVar3);
      puVar8 = (undefined4 *)*param_3;
      goto LAB_2c5b49c2;
    }
    if (puVar5 < (undefined4 *)((int)puVar2 + uVar3)) {
      if (puVar2 < puVar5) {
        uVar7 = (int)puVar5 - (int)puVar2;
        if (uVar7 == 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
        }
        else if (uVar7 != 0) {
          FUN_2c673eb8(puVar8,puVar2,uVar7);
        }
        if (uVar3 - uVar7 == 1) {
          *(undefined1 *)((int)puVar8 + uVar7) = *(undefined1 *)((int)puVar8 + uVar3);
          puVar8 = (undefined4 *)*param_3;
        }
        else {
          if (uVar3 != uVar7) {
            FUN_2c674668((undefined1 *)((int)puVar8 + uVar7),(undefined1 *)((int)puVar8 + uVar3));
          }
          puVar8 = (undefined4 *)*param_3;
        }
      }
      else if (uVar3 == 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)((int)puVar2 + (uVar3 - uVar7));
        puVar8 = (undefined4 *)*param_3;
      }
      else {
        FUN_2c674668(puVar8,(undefined1 *)((int)puVar2 + (uVar3 - uVar7)),uVar3);
        puVar8 = (undefined4 *)*param_3;
      }
      goto LAB_2c5b49c2;
    }
    if (uVar3 != 1) goto LAB_2c5b49b6;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
  puVar8 = (undefined4 *)*param_3;
LAB_2c5b49c2:
  param_3[1] = uVar3;
  *(undefined1 *)((int)puVar8 + uVar3) = 0;
  return;
}

