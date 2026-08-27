/* FUN_140c8514 @ 0x140c8514 */

undefined4 * FUN_140c8514(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_140d7e50(param_1,DAT_140c87d8,DAT_140c87d4,0xfffffffe,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == DAT_140c87dc) {
      puVar2 = (undefined4 *)FUN_140bff34(0x68);
      uVar4 = DAT_140c87e0;
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
      puVar1 = (undefined4 *)FUN_140bff34(0x14);
      uVar4 = DAT_140c87e4;
      puVar1[1] = 0;
      *puVar1 = uVar4;
      puVar1[2] = puVar2;
      FUN_140c14d4(puVar1,0);
      iVar5 = *(int *)(param_1 + 4);
      puVar1[3] = param_1;
      *(int *)(param_1 + 4) = iVar5 + 1;
      uVar4 = DAT_140c87e8;
      puVar1[4] = puVar2;
      *puVar1 = uVar4;
      FUN_140c2d90(0,param_1,puVar2);
    }
    else {
      if (param_2 == DAT_140c87ec) {
        puVar1 = (undefined4 *)FUN_140bff34(0x10);
        uVar4 = DAT_140c87f0;
        puVar1[1] = 0;
        *puVar1 = uVar4;
        uVar3 = FUN_140c02cc();
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        uVar4 = DAT_140c87f4;
        puVar1[2] = uVar3;
        puVar1[3] = param_1;
      }
      else if (param_2 == DAT_140c87f8) {
        puVar1 = (undefined4 *)FUN_140bff34(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_140c87fc;
      }
      else if (param_2 == DAT_140c8800) {
        puVar1 = (undefined4 *)FUN_140bff34(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_140c8804;
      }
      else if (param_2 == DAT_140c8808) {
        puVar1 = (undefined4 *)FUN_140bff34(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_140c880c;
      }
      else {
        if (param_2 == DAT_140c8810) {
          puVar1 = (undefined4 *)FUN_140bff34(0x44);
          uVar4 = DAT_140c8814;
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
          puVar2 = (undefined4 *)FUN_140bff34(0x14);
          uVar4 = DAT_140c8818;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_140c0d94(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_140c881c;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_140c2eac(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_140c8820) {
          puVar1 = (undefined4 *)FUN_140bff34(0x44);
          uVar4 = DAT_140c8824;
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
          puVar2 = (undefined4 *)FUN_140bff34(0x14);
          uVar4 = DAT_140c8828;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_140c0e1c(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_140c882c;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_140c2f56(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_140c8830) {
          puVar1 = (undefined4 *)FUN_140bff34(0x14);
          FUN_140c58a0(puVar1,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar1[4] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_140c8834;
        }
        else {
          if (param_2 == DAT_140c8838) {
            puVar1 = (undefined4 *)FUN_140bff34(0x128);
            uVar4 = DAT_140c883c;
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
            puVar2 = (undefined4 *)FUN_140bff34(0x14);
            uVar4 = DAT_140c8840;
            puVar2[1] = 0;
            *puVar2 = uVar4;
            puVar2[2] = puVar1;
            FUN_140c15a4(puVar2,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar2[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_140c8844;
            puVar2[4] = puVar1;
            *puVar2 = uVar4;
            FUN_140c2e0a(0,param_1,puVar1);
            return puVar2;
          }
          if (param_2 == DAT_140c8848) {
            puVar1 = (undefined4 *)FUN_140bff34(0x10);
            puVar1[1] = 0;
            *puVar1 = DAT_140c884c;
            uVar4 = FUN_140c02cc();
            iVar5 = *(int *)(param_1 + 4);
            puVar1[2] = uVar4;
            puVar1[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_140c8850;
          }
          else if (param_2 == DAT_140c8854) {
            puVar1 = (undefined4 *)FUN_140bff34(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_140c8858;
          }
          else if (param_2 == DAT_140c885c) {
            puVar1 = (undefined4 *)FUN_140bff34(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_140c8860;
          }
          else if (param_2 == DAT_140c8864) {
            puVar1 = (undefined4 *)FUN_140bff34(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_140c8868;
          }
          else {
            if (param_2 == DAT_140c8968) {
              puVar1 = (undefined4 *)FUN_140bff34(0x70);
              uVar4 = DAT_140c896c;
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
              puVar2 = (undefined4 *)FUN_140bff34(0x14);
              uVar4 = DAT_140c8970;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_140c0f0c(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_140c8974;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_140c3000(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 == DAT_140c8978) {
              puVar1 = (undefined4 *)FUN_140bff34(0x70);
              uVar4 = DAT_140c897c;
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
              puVar2 = (undefined4 *)FUN_140bff34(0x14);
              uVar4 = DAT_140c8980;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_140c0f9c(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_140c8984;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_140c30aa(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 != DAT_140c8988) {
                    /* WARNING: Subroutine does not return */
              FUN_140cb800(DAT_140c8990);
            }
            puVar1 = (undefined4 *)FUN_140bff34(0x14);
            FUN_140c96fc(puVar1,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar1[4] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_140c898c;
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

