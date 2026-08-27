/* FUN_2c65019c @ 0x2c65019c */

undefined4 * FUN_2c65019c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_2c664f2c(param_1,DAT_2c650460,DAT_2c65045c,0xfffffffe,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == DAT_2c650464) {
      puVar2 = (undefined4 *)FUN_2c64ca5c(0x68);
      uVar4 = DAT_2c650468;
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
      uVar4 = DAT_2c65046c;
      puVar1[1] = 0;
      *puVar1 = uVar4;
      puVar1[2] = puVar2;
      FUN_2c64e248(puVar1,0);
      iVar5 = *(int *)(param_1 + 4);
      puVar1[3] = param_1;
      *(int *)(param_1 + 4) = iVar5 + 1;
      uVar4 = DAT_2c650470;
      puVar1[4] = puVar2;
      *puVar1 = uVar4;
      FUN_2c654dde(0,param_1,puVar2);
    }
    else {
      if (param_2 == DAT_2c650474) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0x10);
        uVar4 = DAT_2c650478;
        puVar1[1] = 0;
        *puVar1 = uVar4;
        uVar3 = FUN_2c64ce10();
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        uVar4 = DAT_2c65047c;
        puVar1[2] = uVar3;
        puVar1[3] = param_1;
      }
      else if (param_2 == DAT_2c650480) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_2c650484;
      }
      else if (param_2 == DAT_2c650488) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_2c65048c;
      }
      else if (param_2 == DAT_2c650490) {
        puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_2c650494;
      }
      else {
        if (param_2 == DAT_2c650498) {
          puVar1 = (undefined4 *)FUN_2c64ca5c(0x44);
          uVar4 = DAT_2c65049c;
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
          uVar4 = DAT_2c6504a0;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_2c64dd18(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_2c6504a4;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_2c654efe(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_2c6504a8) {
          puVar1 = (undefined4 *)FUN_2c64ca5c(0x44);
          uVar4 = DAT_2c6504ac;
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
          uVar4 = DAT_2c6504b0;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_2c64dda0(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_2c6504b4;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_2c654faa(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_2c6504b8) {
          puVar1 = (undefined4 *)FUN_2c64ca5c(0x14);
          FUN_2c6594c4(puVar1,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar1[4] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_2c6504bc;
        }
        else {
          if (param_2 == DAT_2c6504c0) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0x128);
            uVar4 = DAT_2c6504c4;
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
            uVar4 = DAT_2c6504c8;
            puVar2[1] = 0;
            *puVar2 = uVar4;
            puVar2[2] = puVar1;
            FUN_2c64e318(puVar2,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar2[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_2c6504cc;
            puVar2[4] = puVar1;
            *puVar2 = uVar4;
            FUN_2c654e5a(0,param_1,puVar1);
            return puVar2;
          }
          if (param_2 == DAT_2c6504d0) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0x10);
            puVar1[1] = 0;
            *puVar1 = DAT_2c6504d4;
            uVar4 = FUN_2c64ce10();
            iVar5 = *(int *)(param_1 + 4);
            puVar1[2] = uVar4;
            puVar1[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_2c6504d8;
          }
          else if (param_2 == DAT_2c6504dc) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_2c6504e0;
          }
          else if (param_2 == DAT_2c6504e4) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_2c6504e8;
          }
          else if (param_2 == DAT_2c6504ec) {
            puVar1 = (undefined4 *)FUN_2c64ca5c(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_2c6504f0;
          }
          else {
            if (param_2 == DAT_2c6505f0) {
              puVar1 = (undefined4 *)FUN_2c64ca5c(0x70);
              uVar4 = DAT_2c6505f4;
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
              uVar4 = DAT_2c6505f8;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_2c64de90(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_2c6505fc;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_2c655056(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 == DAT_2c650600) {
              puVar1 = (undefined4 *)FUN_2c64ca5c(0x70);
              uVar4 = DAT_2c650604;
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
              uVar4 = DAT_2c650608;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_2c64df20(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_2c65060c;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_2c655102(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 != DAT_2c650610) {
                    /* WARNING: Subroutine does not return */
              FUN_2c658674(DAT_2c650618);
            }
            puVar1 = (undefined4 *)FUN_2c64ca5c(0x14);
            FUN_2c65fa90(puVar1,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar1[4] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_2c650614;
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

