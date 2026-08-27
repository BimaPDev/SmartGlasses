/* FUN_140c3328 @ 0x140c3328 */

undefined4 * FUN_140c3328(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_140d7e50(param_1,DAT_140c35ec,DAT_140c35e8,0xfffffffe,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == DAT_140c35f0) {
      puVar2 = (undefined4 *)FUN_140bff34(0x68);
      uVar4 = DAT_140c35f4;
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
      uVar4 = DAT_140c35f8;
      puVar1[1] = 0;
      *puVar1 = uVar4;
      puVar1[2] = puVar2;
      FUN_140c1704(puVar1,0);
      iVar5 = *(int *)(param_1 + 4);
      puVar1[3] = param_1;
      *(int *)(param_1 + 4) = iVar5 + 1;
      uVar4 = DAT_140c35fc;
      puVar1[4] = puVar2;
      *puVar1 = uVar4;
      FUN_140c7f66(0,param_1,puVar2);
    }
    else {
      if (param_2 == DAT_140c3600) {
        puVar1 = (undefined4 *)FUN_140bff34(0x10);
        uVar4 = DAT_140c3604;
        puVar1[1] = 0;
        *puVar1 = uVar4;
        uVar3 = FUN_140c02cc();
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        uVar4 = DAT_140c3608;
        puVar1[2] = uVar3;
        puVar1[3] = param_1;
      }
      else if (param_2 == DAT_140c360c) {
        puVar1 = (undefined4 *)FUN_140bff34(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_140c3610;
      }
      else if (param_2 == DAT_140c3614) {
        puVar1 = (undefined4 *)FUN_140bff34(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_140c3618;
      }
      else if (param_2 == DAT_140c361c) {
        puVar1 = (undefined4 *)FUN_140bff34(0xc);
        iVar5 = *(int *)(param_1 + 4);
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(int *)(param_1 + 4) = iVar5 + 1;
        uVar4 = DAT_140c3620;
      }
      else {
        if (param_2 == DAT_140c3624) {
          puVar1 = (undefined4 *)FUN_140bff34(0x44);
          uVar4 = DAT_140c3628;
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
          uVar4 = DAT_140c362c;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_140c11d4(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_140c3630;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_140c8086(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_140c3634) {
          puVar1 = (undefined4 *)FUN_140bff34(0x44);
          uVar4 = DAT_140c3638;
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
          uVar4 = DAT_140c363c;
          puVar2[1] = 0;
          *puVar2 = uVar4;
          puVar2[2] = puVar1;
          FUN_140c125c(puVar2,0,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar2[3] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_140c3640;
          puVar2[4] = puVar1;
          *puVar2 = uVar4;
          FUN_140c8132(0,param_1,puVar1);
          return puVar2;
        }
        if (param_2 == DAT_140c3644) {
          puVar1 = (undefined4 *)FUN_140bff34(0x14);
          FUN_140cc520(puVar1,0);
          iVar5 = *(int *)(param_1 + 4);
          puVar1[4] = param_1;
          *(int *)(param_1 + 4) = iVar5 + 1;
          uVar4 = DAT_140c3648;
        }
        else {
          if (param_2 == DAT_140c364c) {
            puVar1 = (undefined4 *)FUN_140bff34(0x128);
            uVar4 = DAT_140c3650;
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
            uVar4 = DAT_140c3654;
            puVar2[1] = 0;
            *puVar2 = uVar4;
            puVar2[2] = puVar1;
            FUN_140c17d4(puVar2,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar2[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_140c3658;
            puVar2[4] = puVar1;
            *puVar2 = uVar4;
            FUN_140c7fe2(0,param_1,puVar1);
            return puVar2;
          }
          if (param_2 == DAT_140c365c) {
            puVar1 = (undefined4 *)FUN_140bff34(0x10);
            puVar1[1] = 0;
            *puVar1 = DAT_140c3660;
            uVar4 = FUN_140c02cc();
            iVar5 = *(int *)(param_1 + 4);
            puVar1[2] = uVar4;
            puVar1[3] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_140c3664;
          }
          else if (param_2 == DAT_140c3668) {
            puVar1 = (undefined4 *)FUN_140bff34(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_140c366c;
          }
          else if (param_2 == DAT_140c3670) {
            puVar1 = (undefined4 *)FUN_140bff34(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_140c3674;
          }
          else if (param_2 == DAT_140c3678) {
            puVar1 = (undefined4 *)FUN_140bff34(0xc);
            puVar1[1] = 0;
            puVar1[2] = param_1;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = DAT_140c367c;
          }
          else {
            if (param_2 == DAT_140c377c) {
              puVar1 = (undefined4 *)FUN_140bff34(0x70);
              uVar4 = DAT_140c3780;
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
              uVar4 = DAT_140c3784;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_140c134c(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_140c3788;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_140c81de(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 == DAT_140c378c) {
              puVar1 = (undefined4 *)FUN_140bff34(0x70);
              uVar4 = DAT_140c3790;
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
              uVar4 = DAT_140c3794;
              puVar2[1] = 0;
              *puVar2 = uVar4;
              puVar2[2] = puVar1;
              FUN_140c13dc(puVar2,0,0);
              iVar5 = *(int *)(param_1 + 4);
              puVar2[3] = param_1;
              *(int *)(param_1 + 4) = iVar5 + 1;
              uVar4 = DAT_140c3798;
              puVar2[4] = puVar1;
              *puVar2 = uVar4;
              FUN_140c828a(0,param_1,puVar1);
              return puVar2;
            }
            if (param_2 != DAT_140c379c) {
                    /* WARNING: Subroutine does not return */
              FUN_140cb800(DAT_140c37a4);
            }
            puVar1 = (undefined4 *)FUN_140bff34(0x14);
            FUN_140d29a4(puVar1,0);
            iVar5 = *(int *)(param_1 + 4);
            puVar1[4] = param_1;
            *(int *)(param_1 + 4) = iVar5 + 1;
            uVar4 = DAT_140c37a0;
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

