/* FUN_2c65538c @ 0x2c65538c */

undefined4 * FUN_2c65538c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_2c664f2c(param_1,DAT_2c655650,DAT_2c65564c,0xfffffffe,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == DAT_2c655654) {
      puVar2 = (undefined4 *)FUN_2c64ca5c(0x68);
      uVar4 = DAT_2c655658;
      puVar2[1] = 0;
      *puVar2 = uVar4;
      *(undefined1 *)(puVar2 + 4) = 0;
      *(undefined2 *)(puVar2 + 9) = 0;
      *(undefined1 *)(puVar2 + 0x19) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar1 = (undefined4 *)FUN_2c64ca5c(0x14);
      uVar4 = DAT_2c65565c;
      puVar1[1] = 0;
      *puVar1 = uVar4;
      puVar1[2] = puVar2;
      FUN_2c64e018(puVar1,0);
      iVar5 = *(int *)(param_1 + 4);
      puVar1[3] = param_1;
      *(int *)(param_1 + 4) = iVar5 + 1;
      uVar4 = DAT_2c655660;
      puVar1[4] = puVar2;
      *puVar1 = uVar4;
      FUN_2c64fc04(0,param_1,puVar2);
    }
    else {
      if (param_2 == DAT_2c655664) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0x10);
        uVar4 = DAT_2c655668;
        puVar1[1] = 0;
        *puVar1 = uVar4;
        uVar3 = FUN_2c64ce10();
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        uVar4 = DAT_2c65566c;
        puVar1[2] = uVar3;
        puVar1[3] = param_1;
      }
      else if (param_2 == DAT_2c655670) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_2c655674;
      }
      else if (param_2 == DAT_2c655678) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_2c65567c;
      }
      else if (param_2 == DAT_2c655680) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_2c655684;
      }
      else {
        if (param_2 == DAT_2c655688) {
          puVar1 = (undefined4 *)FUN_2c64ca5c(0x44);
          uVar4 = DAT_2c65568c;
          *(undefined2 *)(puVar1 + 4) = 0;
          *(undefined1 *)((int)puVar1 + 0x12) = 0;
          puVar1[0xd] = 0;
          *(undefined1 *)((int)puVar1 + 0x43) = 0;
          *puVar1 = uVar4;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar2 = (undefined4 *)FUN_2c64ca5c(0x14);
          uVar4 = DAT_2c655690;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_2c64d8d8(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_2c655694;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_2c64fd20(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_2c655698) {
          puVar1 = (undefined4 *)FUN_2c64ca5c(0x44);
          uVar4 = DAT_2c65569c;
          *(undefined2 *)(puVar1 + 4) = 0;
          *(undefined1 *)((int)puVar1 + 0x12) = 0;
          puVar1[0xd] = 0;
          *(undefined1 *)((int)puVar1 + 0x43) = 0;
          *puVar1 = uVar4;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar2 = (undefined4 *)FUN_2c64ca5c(0x14);
          uVar4 = DAT_2c6556a0;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_2c64d960(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_2c6556a4;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_2c64fdca(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_2c6556a8) {
          puVar1 = (undefined4 *)FUN_2c64ca5c(0x14);
          FUN_2c65271c(puVar1,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar1[4] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_2c6556ac;
        }
        else {
          if (param_2 == DAT_2c6556b0) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0x128);
            uVar4 = DAT_2c6556b4;
            puVar1[1] = 0;
            *puVar1 = uVar4;
            *(undefined1 *)(puVar1 + 4) = 0;
            *(undefined1 *)(puVar1 + 0x49) = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            puVar1[10] = 0;
            puVar2 = (undefined4 *)FUN_2c64ca5c(0x14);
            uVar4 = DAT_2c6556b8;
            puVar2[1] = 0;
            *puVar2 = uVar4;
            puVar2[2] = puVar1;
            FUN_2c64e0e8(puVar2,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar2[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_2c6556bc;
            puVar2[4] = puVar1;
            *puVar2 = uVar4;
            FUN_2c64fc7e(0,param_1,puVar1);
            return puVar2;
          }
          if (param_2 == DAT_2c6556c0) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0x10);
            puVar1[1] = 0;
            *puVar1 = DAT_2c6556c4;
            uVar4 = FUN_2c64ce10();
            iVar5 = *(int *)(param_1 + 4);
            puVar1[2] = uVar4;
            puVar1[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_2c6556c8;
          }
          else if (param_2 == DAT_2c6556cc) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_2c6556d0;
          }
          else if (param_2 == DAT_2c6556d4) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_2c6556d8;
          }
          else if (param_2 == DAT_2c6556dc) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_2c6556e0;
          }
          else {
            if (param_2 == DAT_2c6557e0) {
              puVar1 = (undefined4 *)FUN_2c64ca5c(0x70);
              uVar4 = DAT_2c6557e4;
              puVar1[1] = 0;
              *puVar1 = uVar4;
              *(undefined1 *)(puVar1 + 4) = 0;
              puVar1[0xf] = 0;
              *(undefined1 *)(puVar1 + 0x1b) = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[5] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              puVar1[10] = 0;
              puVar1[0xb] = 0;
              puVar1[0xc] = 0;
              puVar1[0xd] = 0;
              puVar1[0xe] = 0;
              puVar2 = (undefined4 *)FUN_2c64ca5c(0x14);
              uVar4 = DAT_2c6557e8;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_2c64da50(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_2c6557ec;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_2c64fe74(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 == DAT_2c6557f0) {
              puVar1 = (undefined4 *)FUN_2c64ca5c(0x70);
              uVar4 = DAT_2c6557f4;
              puVar1[1] = 0;
              *puVar1 = uVar4;
              *(undefined1 *)(puVar1 + 4) = 0;
              puVar1[0xf] = 0;
              *(undefined1 *)(puVar1 + 0x1b) = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[5] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              puVar1[10] = 0;
              puVar1[0xb] = 0;
              puVar1[0xc] = 0;
              puVar1[0xd] = 0;
              puVar1[0xe] = 0;
              puVar2 = (undefined4 *)FUN_2c64ca5c(0x14);
              uVar4 = DAT_2c6557f8;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_2c64dae0(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_2c6557fc;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_2c64ff1e(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 != DAT_2c655800) {
                    /* WARNING: Subroutine does not return */
              FUN_2c658674(DAT_2c655808);
            }
            puVar1 = (undefined4 *)FUN_2c64ca5c(0x14);
            FUN_2c656574(puVar1,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar1[4] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_2c655804;
          }
        }
      }
      *puVar1 = uVar4;
    }
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

