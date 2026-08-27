/* FUN_2c4e80c8 @ 0x2c4e80c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e80c8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int iStack_ac;
  undefined1 auStack_a8 [124];
  undefined4 uStack_2c;
  
  piVar4 = _LAB_2c4e8238;
  puVar3 = _LAB_2c4e8234;
  puVar2 = _LAB_2c4e8214;
  puVar1 = _LAB_2c4e8210;
  uStack_2c = *_LAB_2c4e820c;
  do {
    do {
      do {
        func_0x2c644248(&iStack_b8,*puVar3,0xffffffff);
        piVar5 = piStack_b4;
      } while (iStack_b8 != 0x10);
    } while (piStack_b4 == (int *)0x0);
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      func_0x2c4e804c();
      iVar6 = *piVar4;
    }
    iVar6 = FUN_2c644044(iVar6,0);
    if (iVar6 == 0) {
      iVar6 = *piVar5;
      if (1 < iVar6) {
        iVar8 = piVar5[2];
        if (iVar6 == 2) {
          iVar6 = 0;
          piStack_bc = (int *)0x0;
        }
        else {
          iVar6 = iVar6 + -2;
          piStack_bc = piVar5 + 3;
        }
        iVar7 = FUN_2c66b624(iVar8,_LAB_2c4e8218);
        puVar10 = _LAB_2c4e823c;
        if (iVar7 != 0) {
          do {
            iVar7 = FUN_2c66b624(*puVar10,iVar8);
            if (iVar7 == 0) {
              if (((int)(uint)*(byte *)((int)puVar10 + 5) < iVar6) ||
                 (iVar6 < (int)(uint)*(byte *)(puVar10 + 1))) {
                iVar6 = FUN_2c4e9354();
                (**(code **)(iVar6 + 0x58))(_LAB_2c4e8220,_LAB_2c4e8228);
              }
              else {
                iStack_ac = iVar7;
                FUN_2c674268(auStack_a8,0,0x7c);
                iVar8 = (*(code *)puVar10[2])(iVar6,piStack_bc,&iStack_ac,0x80);
                iVar6 = _LAB_2c4e821c;
                if (iVar8 != 0) {
                  iVar6 = iVar8;
                }
                iVar8 = FUN_2c4e9354();
                (**(code **)(iVar8 + 0x58))(_LAB_2c4e8220,iVar6);
              }
              goto LAB_2c4e8192;
            }
            puVar10 = puVar10 + 4;
          } while (puVar10 != puVar1);
          iVar6 = FUN_2c4e9354();
          (**(code **)(iVar6 + 0x58))(_LAB_2c4e8220,_LAB_2c4e8230);
          goto LAB_2c4e8192;
        }
      }
      FUN_2c4e7f9c();
    }
    else {
      iVar6 = FUN_2c4e9354();
      (**(code **)(iVar6 + 0x58))(_LAB_2c4e8220,_LAB_2c4e822c);
    }
LAB_2c4e8192:
    if (0 < *piVar5) {
      iVar6 = 0;
      piVar9 = piVar5;
      do {
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
        FUN_2c647824(*puVar2,*piVar9);
      } while (iVar6 < *piVar5);
    }
    FUN_2c644080(*piVar4);
    func_0x2c4f00f8(piVar5);
    if (*_LAB_2c4e8224 != 0) {
      FUN_2c646ab8(*_LAB_2c4e8224,2);
    }
  } while( true );
}

